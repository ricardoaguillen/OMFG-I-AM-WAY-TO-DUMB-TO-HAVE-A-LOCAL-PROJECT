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
    std::stringstream stringstreamPacientes;
    for(auto iteradorDePacientes = patients.begin(); iteradorDePacientes != patients.end(); ++iteradorDePacientes){
        stringstreamPacientes << iteradorDePacientes->toString() << std::endl;
    }
    return stringstreamPacientes.str();
}

void ListOfPatients::ProcessGeneticData(ListOfDiseases &listOfDiseases) {
    for (auto &itOfPatients : patients) {
        std::stringstream  strGeneticData;
        for (auto &itOfDiseases : listOfDiseases.getDiseases()) {
            strGeneticData << GeneticData::findDiseases(itOfDiseases, itOfPatients);
        }
        itOfPatients.setPossibleDisease(strGeneticData.str());
    }
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
