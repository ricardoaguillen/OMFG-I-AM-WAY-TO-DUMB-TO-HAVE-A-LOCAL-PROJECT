//
// Created by Madera_Eonica on 28/6/2021.
//

#ifndef APP2PROYECTO_JSONADAPTER_H
#define APP2PROYECTO_JSONADAPTER_H

#include "../lib/nlohmann/json.hpp"
#include <iomanip>
#include <fstream>
#include <sstream>
#include <iostream>

using ::nlohmann::json;

class JsonAdapter {
public:
    static void save(const std::string &jsonData, const std::string &filename);

    static std::string read(const std::string &filename);
};

#endif //APP2PROYECTO_JSONADAPTER_H
