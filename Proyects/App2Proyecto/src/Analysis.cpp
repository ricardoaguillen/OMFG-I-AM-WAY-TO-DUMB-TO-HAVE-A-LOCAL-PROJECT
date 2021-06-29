//
// Created by Madera_Eonica on 28/6/2021.
//

#include "Analysis.h"

Analysis::Analysis() {

}

Analysis::~Analysis() {

}

std::vector<std::string> Analysis::parseDiseases(std::string diseases) {
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


