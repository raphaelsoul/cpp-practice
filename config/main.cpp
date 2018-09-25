//
// Created by raphaelsoul on 9/25/18.
//
#include <iostream>
#include <boost/filesystem.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>

using namespace boost;
using namespace std;

int main () {
    boost::property_tree::ptree pt;

    boost::filesystem::path confPath = boost::filesystem::canonical("../config/sample.conf");

    boost::property_tree::ini_parser::read_ini(confPath.string(), pt);

    std::cout << "basic.foobar = " << pt.get<std::string>("basic.foobar") << std::endl;
    std::cout << "advanced.lorem = " << pt.get<std::string>("advanced.lorem") << std::endl;
}