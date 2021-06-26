//
// Created by Madera_Eonica on 25/6/2021.
//

#include "Person.h"

Person::Person() {
    id = 0;
    name = "";
    phoneNumber = "";
    email = "";
}

Person::Person(double id, const std::string &name, const std::string &phoneNumber, const std::string &email) :
                                                    id(id),name(name),phoneNumber(phoneNumber),email(email) {}

Person::~Person() {

}

double Person::getId() const {
    return id;
}

void Person::setId(double id) {
    Person::id = id;
}

const std::string &Person::getName() const {
    return name;
}

void Person::setName(const std::string &name) {
    Person::name = name;
}

const std::string &Person::getPhoneNumber() const {
    return phoneNumber;
}

void Person::setPhoneNumber(const std::string &phoneNumber) {
    Person::phoneNumber = phoneNumber;
}

const std::string &Person::getEmail() const {
    return email;
}

void Person::setEmail(const std::string &email) {
    Person::email = email;
}

std::string Person::toString() const{
    std::stringstream tostringPerson;
    tostringPerson.precision(20);
    tostringPerson << "Id: " << getId() <<  std::fixed << std::endl;
    tostringPerson << "Name: " << getName() << std::endl;
    tostringPerson << "Phone Number: " << getPhoneNumber() << std::endl;
    tostringPerson << "Email: " << getEmail() << std::endl;
    return tostringPerson.str();
}

