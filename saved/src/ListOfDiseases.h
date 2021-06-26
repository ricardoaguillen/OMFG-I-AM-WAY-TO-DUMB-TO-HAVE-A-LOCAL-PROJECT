//
// Created by Madera_Eonica on 24/6/2021.
//

#ifndef PRODUCTMANAGER_LISTOFDISEASES_H
#define PRODUCTMANAGER_LISTOFDISEASES_H

#include <vector>
#include <string>
#include <sstream>
#include "Disease.h"

class ListOfDiseases {
private:
    std::vector<Disease> diseases;
public:
    ListOfDiseases();
    ~ListOfDiseases();
    std::string toString();
    void add(Disease disease);
    const std::vector<Disease> &getDiseases() const;
    void setDiseases(const std::vector<Disease> &diseases);
};


#endif //PRODUCTMANAGER_LISTOFDISEASES_H
