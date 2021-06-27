//
// Created by Madera_Eonica on 18/6/2021.
//

#ifndef APP2PROYECTO_ANALISIS2_H
#define APP2PROYECTO_ANALISIS2_H

#include <string>
#include <sstream>
#include <iomanip>
#include "ListOfPatients.h"
using namespace std;

class Analisis2 {
private:
    //...
public:
    static std::string task(std::string data);
    static std::string analiseMultiplePatients(ListOfPatients &patients);
    static int percentage(int num,int size);
    static int findNumOf(char x, std::string data);
};


#endif //APP2PROYECTO_ANALISIS2_H
