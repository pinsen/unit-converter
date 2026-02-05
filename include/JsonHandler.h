#ifndef JSONHANDLER_H
#define JSONHANDLER_H

#include "FileHandler.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

class JasonHandler : public FileHandler {
private:
    nlohmann::json jsonData;

public:
    bool load(std::string filename) override;
    std::vector<std::string> getColumn(std::string selector) override;
    void appendColumn(std::string newHeader,const std::vector<std::string>& values) override;
    void save(std::string filename) override;
};

#endif