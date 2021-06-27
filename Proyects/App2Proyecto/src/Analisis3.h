//
// Created by Madera_Eonica on 18/6/2021.
//

#ifndef APP2PROYECTO_ANALISIS3_H
#define APP2PROYECTO_ANALISIS3_H
#include <string>
#include "BinaryFile.h"
#include "CsvFile.h"
#include <sstream>
#include <vector>
#include "ListOfPatients.h"
#include "ListOfDiseases.h"
#include "Analisis1.h"

class Analisis3 {
private:
public:
    static std::string task(std::string data);
    static std::string analiseMultiplePatients(ListOfPatients &patients);
};

#endif //APP2PROYECTO_ANALISIS3_H
