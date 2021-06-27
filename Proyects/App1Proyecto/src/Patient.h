//
// Created by Madera_Eonica on 18/6/2021.
//

#ifndef APP1PROYECTO_PATIENT_H
#define APP1PROYECTO_PATIENT_H

#include <string>
#include <sstream>
#include <vector>
#include "Person.h"

class Patient: public Person {
private:
    std::string sequence;
    std::string possibleDisease;
public:
    Patient();

    Patient(double id, const std::string &name, const std::string &phoneNumber, const std::string &email,
            const std::string &sequence);

    ~Patient();

    std::string toString() const;

    const std::string &getSequence() const;

    void setSequence(const std::string &sequence);

    const std::string &getPossibleDisease() const;

    void setPossibleDisease(const std::string &possibleDisease);
};


#endif //APP1PROYECTO_PATIENT_H
