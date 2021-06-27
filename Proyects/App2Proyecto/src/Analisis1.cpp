//
// Created by Madera_Eonica on 18/6/2021.
//

#include "Analisis1.h"

std::string Analisis1::task(Patient patient) {
    std::stringstream stringstreamSusceptibility;
    stringstreamSusceptibility << "Diseases Sorted From Most to Least: " << std::endl;
    stringstreamSusceptibility << sortDiseases(parseDiseases(patient.getPossibleDisease()));
    return stringstreamSusceptibility.str();
}

std::vector<std::string> Analisis1::parseDiseases(std::string diseases) {
    std::vector<std::string> diseaseVec;
    std::string diseaseName;
    int trackNum = 0;
    for (auto diseaseIterator = 0; diseaseIterator < diseases.size(); ++diseaseIterator) {
        if (diseases[diseaseIterator] == ',') {
            for (int wordIterator = trackNum; wordIterator < diseaseIterator; ++wordIterator) {
                if (diseases[wordIterator] != ',') {
                    diseaseName += diseases[wordIterator];
                }
            }
            diseaseVec.push_back(diseaseName);
            diseaseName = "";
            trackNum = diseaseIterator;
        }
    }
    return diseaseVec;
}

std::string Analisis1::sortDiseases(std::vector<std::string> diseases) {
    std::stringstream strShowSortedDiseases;

    return strShowSortedDiseases.str();
}