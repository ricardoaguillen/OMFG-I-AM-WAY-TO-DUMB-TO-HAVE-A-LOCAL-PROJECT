//
// Created by Madera_Eonica on 18/6/2021.
//

#include "ListOfPatients.h"

ListOfPatients::ListOfPatients() {
    patients = {};
}

ListOfPatients::~ListOfPatients() {

}

std::string ListOfPatients::toString() {
    std::stringstream stringstreamPacient;
    for(auto iteratorOfPatients = patients.begin(); iteratorOfPatients != patients.end(); ++iteratorOfPatients){
        stringstreamPacient << iteratorOfPatients->toString() << std::endl;
    }
    return stringstreamPacient.str();
}

void ListOfPatients::add(Patient paciente) {
    patients.push_back(paciente);
}

const std::vector<Patient> &ListOfPatients::getPatients() const {
    return patients;
}

void ListOfPatients::setPatients(const std::vector<Patient> &patients) {
    ListOfPatients::patients = patients;
}
