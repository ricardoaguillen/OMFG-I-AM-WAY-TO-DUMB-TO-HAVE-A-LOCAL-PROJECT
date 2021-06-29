//
// Created by Madera_Eonica on 18/6/2021.
//

#ifndef APP2PROYECTO_ANALYSIS2_H
#define APP2PROYECTO_ANALYSIS2_H

#include <string>
#include <sstream>
#include <iomanip>
#include "Analysis.h"
#include "ListOfPatients.h"
using namespace std;

class Analysis2: public Analysis{
public:
    Analysis2();
    ~Analysis2();
    std::string task(std::string data) override;
    std::string analiseMultiplePatients(ListOfPatients &patients) override;
    int percentage(int num,int size);
    int findNumOf(char x, std::string data);
};


#endif //APP2PROYECTO_ANALYSIS2_H
