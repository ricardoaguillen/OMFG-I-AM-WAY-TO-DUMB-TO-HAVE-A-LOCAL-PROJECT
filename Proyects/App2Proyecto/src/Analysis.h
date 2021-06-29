//
// Created by Madera_Eonica on 18/6/2021.
//

#ifndef APP2PROYECTO_ANALYSIS_H
#define APP2PROYECTO_ANALYSIS_H

#include <string>
#include <sstream>
#include <vector>
#include "ListOfPatients.h"

class Analysis {
public:
    Analysis();
    virtual ~Analysis();
    //Hooks
    virtual std::string task(std::string data) = 0;
    virtual std::string analiseMultiplePatients(ListOfPatients &patients) = 0;
    //Shared function
    virtual std::vector<std::string> parseDiseases(std::string diseases);
};


#endif //APP2PROYECTO_ANALYSIS_H