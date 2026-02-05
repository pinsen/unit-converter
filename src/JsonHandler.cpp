#include "JsonHandler.h"
#include <fstream>
#include <iostream>

bool JsonHandler::load(std::string filename) {
    
    std::ifstream in(filename);
    if (!in.is_open())return false;
    in >> jsonData;
    return true;
}

void JsonHandler::save(const std::string& filename) {
    std::ofstream out(filename);
    out << jsonData.dump(4);
}

std::vector<std::string> JsonHandler::getColumn(const std::string& key) {
    std::vector<std::string> result;
    for (auto& item : jsonData) {
        if(item.contains(key))result.push_back(item[key].dump());
        else result.push_back("");
    }
    return result;
}

void JsonHandler::appendColumn(const std::string& key, const std::vector<std::string>& data) {
    for (size_t i=0;i<jsonData.size();i++) {
        jsonData[i][key] = data[i];
    }
}