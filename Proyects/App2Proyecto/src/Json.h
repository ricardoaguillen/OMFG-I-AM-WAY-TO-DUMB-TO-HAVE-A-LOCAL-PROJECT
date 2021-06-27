//
// Created by Madera_Eonica on 18/6/2021.
//

#ifndef APP1PROYECTO_JSONFILE_H
#define APP1PROYECTO_JSONFILE_H

#include "../lib/nlohmann/json.hpp"
#include <iomanip>
#include <fstream>
#include <sstream>
#include <iostream>
#include "ListOfPatients.h"

using ::nlohmann::json;

class Json {
public:
    static void save(const std::string &jsonData, const std::string &filename);

    static std::string read(const std::string &filename);

    static std::string serialize(ListOfPatients &listOfPatients);

    static ListOfPatients deserialize(const std::string &_data);
};


#endif //APP1PROYECTO_JSONFILE_H