//
// Created by raphaelsoul on 9/25/18.
//

#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include "JsonHelper.h"

using namespace std;
using namespace boost::filesystem;

boost::property_tree::ptree JsonHelper::boostJSONParse(boost::filesystem::path filePath) {
    boost::property_tree::ptree root;
    boost::property_tree::read_json(filePath.string(), root);
    return root;
}