//
// Created by raphaelsoul on 9/25/18.
//

#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <json/json.h>
#include <fstream>
#include "JsonHelper.h"

using namespace std;
using namespace boost::filesystem;

boost::property_tree::ptree JsonHelper::boostJSONParse(boost::filesystem::path filePath) {
    boost::property_tree::ptree root;
    boost::property_tree::read_json(filePath.string(), root);
    return root;
}

Json::Value JsonHelper::jsonCppParse(boost::filesystem::path filePath) {
    Json::Value root;
    std::ifstream config_doc(filePath.string(), std::ifstream::binary);
    config_doc >> root;
    return root;
}