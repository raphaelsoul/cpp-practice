//
// Created by raphaelsoul on 9/25/18.
//

#ifndef CPP_TUTORIAL_JSONHELPER_H
#define CPP_TUTORIAL_JSONHELPER_H

#include <boost/filesystem.hpp>
#include <json/json.h>
#include <boost/property_tree/ptree.hpp>

using namespace std;

class JsonHelper {
public:
    boost::property_tree::ptree static boostJSONParse(boost::filesystem::path filePath);
    Json::Value static jsonCppParse(boost::filesystem::path filePath);
};


#endif //CPP_TUTORIAL_JSONHELPER_H
