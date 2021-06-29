//
// Created by Madera_Eonica on 18/6/2021.
//

#ifndef APP2PROYECTO_ANALYSIS3_H
#define APP2PROYECTO_ANALYSIS3_H
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include "ListOfPatients.h"
#include "ListOfDiseases.h"
#include "Analysis.h"

class Analysis3 : public Analysis {
public:
    Analysis3();
    ~Analysis3();
    std::string task(std::string data) override;
    std::string analiseMultiplePatients(ListOfPatients &patients) override;
    std::string sortConcordance(std::vector<std::string> diseases);
};

#endif //APP2PROYECTO_ANALYSIS3_H
