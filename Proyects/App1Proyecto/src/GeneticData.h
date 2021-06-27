//
// Created by Madera_Eonica on 24/6/2021.
//

#ifndef PRODUCTMANAGER_GENETICDATA_H
#define PRODUCTMANAGER_GENETICDATA_H

#include <string>
#include <vector>
#include "Disease.h"
#include "ListOfPatients.h"
#include "ListOfDiseases.h"

class GeneticData {
private:
    //...
public:
    GeneticData();
    ~GeneticData();
    static std::string findDiseases(Disease disease,Patient patient);
};


#endif //PRODUCTMANAGER_GENETICDATA_H
