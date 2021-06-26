//
// Created by Madera_Eonica on 24/6/2021.
//

#ifndef PRODUCTMANAGER_DISEASE_H
#define PRODUCTMANAGER_DISEASE_H

#include <string>
#include <sstream>

class Disease {
private:
    std::string diseaseName;
    std::string sequence;
public:
    Disease();

    Disease(const std::string &nameOfTheDisease, const std::string &Sequence);

    ~Disease();

    std::string toString();

    const std::string &getDiseaseName() const;

    void setDiseaseName(const std::string &diseaseName);

    const std::string &getSequence() const;

    void setSequence(const std::string &sequence);
};


#endif //PRODUCTMANAGER_DISEASE_H
