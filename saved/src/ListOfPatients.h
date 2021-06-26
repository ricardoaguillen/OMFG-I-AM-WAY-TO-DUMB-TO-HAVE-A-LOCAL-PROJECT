//
// Created by Madera_Eonica on 18/6/2021.
//

#ifndef APP1PROYECTO_LISTOFPATIENTS_H
#define APP1PROYECTO_LISTOFPATIENTS_H

#include "Patient.h"
#include <string>
#include <sstream>
#include <vector>
#include "ListOfDiseases.h"
#include "GeneticData.h"

class ListOfPatients {
private:
    std::vector<Patient> patients;
public:
    ListOfPatients();
    ~ListOfPatients();
    std::string toString();
    void add(Patient);
    void ProcessGeneticData(ListOfDiseases &listOfDiseases);
    const std::vector<Patient> &getPatients() const;
    void setPatients(const std::vector<Patient> &patients);
};


#endif //APP1PROYECTO_LISTOFPATIENTS_H
