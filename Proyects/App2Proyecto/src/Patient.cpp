//
// Created by Madera_Eonica on 18/6/2021.
//

#include "Patient.h"

Patient::Patient() {
    sequence = "";
    possibleDisease = "";
}

Patient::Patient(double id, const std::string &name, const std::string &phoneNumber, const std::string &email,
                 const std::string &sequence) : Person(id, name, phoneNumber,email),
                 sequence(sequence) {  possibleDisease = ""; }

Patient::~Patient() {

}

std::string Patient::toString() const{
    std::stringstream tostringPerson;
    tostringPerson << Person::toString();
    tostringPerson << "Sequence: " << getSequence() << std::endl;
    if(!getPossibleDisease().empty()){
        tostringPerson << "Possible Diseases: " << getPossibleDisease() << std::endl;
    }
    return tostringPerson.str();
}

const std::string &Patient::getSequence() const {
    return sequence;
}

void Patient::setSequence(const std::string &sequence) {
    Patient::sequence = sequence;
}

const std::string &Patient::getPossibleDisease() const {
    return possibleDisease;
}

void Patient::setPossibleDisease(const std::string &possibleDisease) {
    Patient::possibleDisease = possibleDisease;
}


