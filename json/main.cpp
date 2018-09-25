//
// Created by raphaelsoul on 9/25/18.
//
#include <iostream>
#include "./JsonHelper.h"
#include <boost/filesystem.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using namespace std;

int main () {

    // boost json parser
    boost::filesystem::path filePath = boost::filesystem::canonical("../json/sample.json");
    boost::property_tree::ptree root = JsonHelper::boostJSONParse(filePath);
    boost::property_tree::write_json(std::cout, root);

    // jsoncpp parser
    Json::Value json = JsonHelper::jsonCppParse(filePath);
    cout << json << endl;
}