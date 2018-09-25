//
// Created by raphaelsoul on 9/25/18.
//
#include <iostream>
#include <string>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/filesystem.hpp>

using namespace std;

int main () {

    // parse json string in memory
    boost::property_tree::ptree root;

    boost::filesystem::path filePath = boost::filesystem::canonical("../json/sample.json");

    boost::property_tree::read_json(filePath.string(), root);

    root.put("some.complex.path", 123);
    boost::property_tree::write_json(std::cout, root);
    return 0;
}