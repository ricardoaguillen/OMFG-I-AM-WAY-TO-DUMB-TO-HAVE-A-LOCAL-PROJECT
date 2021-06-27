//
// Created by Madera_Eonica on 24/6/2021.
//

#include "ListOfDiseases.h"


ListOfDiseases::ListOfDiseases() {
    diseases = {};
}


ListOfDiseases::~ListOfDiseases() {

}

std::string ListOfDiseases::toString() {
    std::stringstream strDiases;
    for(auto iteratorOfDiases = diseases.begin(); iteratorOfDiases != diseases.end(); ++iteratorOfDiases ) {
        strDiases << iteratorOfDiases->toString() << std::endl;
    }
    return strDiases.str();
}

void ListOfDiseases::add(Disease disease) {
    diseases.push_back(disease);
}

const std::vector<Disease> &ListOfDiseases::getDiseases() const {
    return diseases;
}

void ListOfDiseases::setDiseases(const std::vector<Disease> &diseases) {
    ListOfDiseases::diseases = diseases;
}
