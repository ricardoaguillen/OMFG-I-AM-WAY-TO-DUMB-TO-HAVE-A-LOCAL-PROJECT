//
// Created by Madera_Eonica on 18/6/2021.
//

#ifndef APP2PROYECTO_ANALISIS1_H
#define APP2PROYECTO_ANALISIS1_H

#include <vector>
#include <string>
#include <regex>
#include "ListOfPatients.h"
#include "ListOfDiseases.h"

class Analisis1 {
public:
    static std::string task(Patient patient);
    static std::string analiseMultiplePatients(ListOfPatients &patients);
    static std::vector<std::string> parseDiseases(std::string);
    static std::string sortDiseases(std::vector<std::string> diseases);
};


#endif //APP2PROYECTO_ANALISIS1_H
