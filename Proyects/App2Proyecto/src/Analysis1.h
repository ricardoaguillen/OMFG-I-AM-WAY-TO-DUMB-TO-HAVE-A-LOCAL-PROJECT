//
// Created by Madera_Eonica on 18/6/2021.
//

#ifndef APP2PROYECTO_ANALYSIS1_H
#define APP2PROYECTO_ANALYSIS1_H

#include <vector>
#include <string>
#include <algorithm>
#include "ListOfPatients.h"
#include "ListOfDiseases.h"
#include "Analysis.h"

class Analysis1: public Analysis {
public:
    Analysis1();
    ~Analysis1();
    std::string task(std::string data) override;
    std::string analiseMultiplePatients(ListOfPatients &patients) override;
    std::string sortDiseases(std::vector<std::string> diseases);
};

#endif //APP2PROYECTO_ANALYSIS1_H
