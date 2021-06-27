//
// Created by Madera_Eonica on 25/6/2021.
//

#ifndef PRODUCTMANAGER_PERSON_H
#define PRODUCTMANAGER_PERSON_H
#include <string>
#include <sstream>

class Person {
private:
    double id;
    std::string name;
    std::string phoneNumber;
    std::string email;
public:
    Person();

    Person(double id, const std::string &name, const std::string &phoneNumber, const std::string &email);

    ~Person();

    double getId() const;

    void setId(double id);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getPhoneNumber() const;

    void setPhoneNumber(const std::string &phoneNumber);

    const std::string &getEmail() const;

    void setEmail(const std::string &email);

    std::string toString() const;
};


#endif //PRODUCTMANAGER_PERSON_H
