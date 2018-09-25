//
// Created by raphaelsoul on 9/25/18.
//
#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>

int main () {
    boost::property_tree::ptree pt;
    boost::property_tree::ini_parser::read_ini("/Users/raphaelsoul/Projects/cpp-tutorial/config/sample.conf", pt);

    std::cout << pt.get<std::string>("basic.foobar") << std::endl;
    std::cout << pt.get<std::string>("advanced.lorem") << std::endl;
}