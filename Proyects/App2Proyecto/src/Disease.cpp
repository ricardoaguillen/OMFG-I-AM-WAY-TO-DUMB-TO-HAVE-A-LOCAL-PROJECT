//
// Created by Madera_Eonica on 24/6/2021.
//

#include "Disease.h"

Disease::Disease() {

}

Disease::~Disease() {

}

Disease::Disease(const std::string &nameOfTheDisease, const std::string &Sequence) {
    sequence = Sequence;
    diseaseName = nameOfTheDisease;
}

std::string Disease::toString() {
    std::stringstream strEnfermedad;
    strEnfermedad << "Name of the Disease: " << getDiseaseName() << ",";
    strEnfermedad << "Sequence: " << getSequence() << std::endl;
    return strEnfermedad.str();
}

const std::string &Disease::getDiseaseName() const {
    return diseaseName;
}

void Disease::setDiseaseName(const std::string &diseaseName) {
    Disease::diseaseName = diseaseName;
}

const std::string &Disease::getSequence() const {
    return sequence;
}

void Disease::setSequence(const std::string &sequence) {
    Disease::sequence = sequence;
}

