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

    boost::filesystem::path fullPath(boost::filesystem::current_path());
    std::cout << "Current path is : " << fullPath << std::endl;

    boost::property_tree::ptree pt;
    boost::property_tree::ini_parser::read_ini("../../config/sample.conf", pt);

    std::cout << pt.get<std::string>("basic.foobar") << std::endl;
    std::cout << pt.get<std::string>("advanced.lorem") << std::endl;
}