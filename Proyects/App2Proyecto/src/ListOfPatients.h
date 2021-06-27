//
// Created by Madera_Eonica on 18/6/2021.
//

#ifndef APP2PROYECTO_LISTOFPATIENTS_H
#define APP2PROYECTO_LISTOFPATIENTS_H

#include "Patient.h"
#include <vector>
#include <sstream>
#include <string>

class ListOfPatients {
private:
    std::vector<Patient> patients;
public:
    ListOfPatients();
    ~ListOfPatients();
    std::string toString();
    void add(Patient);
    const std::vector<Patient> &getPatients() const;
    void setPatients(const std::vector<Patient> &patients);
};

#endif //APP2PROYECTO_LISTOFPATIENTS_H