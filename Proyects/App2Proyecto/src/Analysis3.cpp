//
// Created by Madera_Eonica on 18/6/2021.
#include "Analysis3.h"

Analysis3::Analysis3() {

}

Analysis3::~Analysis3() {

}


std::string Analysis3::task(std::string data) {
    std::stringstream stringstreamConcordance;
    stringstreamConcordance << Analysis3::sortConcordance(parseDiseases(data));
    return stringstreamConcordance.str();
}

std::string Analysis3::analiseMultiplePatients(ListOfPatients &patients) {
    std::stringstream strSortConcordance;
    for (auto &itOfPatients : patients.getPatients()) {
        strSortConcordance.precision(0);
        strSortConcordance << "Patient Name: " << itOfPatients.getName() << std::endl;
        strSortConcordance << "ID: " << std::fixed << itOfPatients.getId() << std::endl;
        if (Analysis3::task(itOfPatients.getPossibleDisease()).size() > 0) {
            strSortConcordance << Analysis3::task(itOfPatients.getPossibleDisease()) << std::endl << std::endl;
        } else {
            strSortConcordance << "The patient has no concordances" << std::endl << std::endl;
        }
    }
    return strSortConcordance.str();
}

std::string Analysis3::sortConcordance(std::vector<std::string> diseases) {
    std::stringstream strShowSortedDiseases;
    std::vector<std::string> usedWords;
    std::vector<std::pair<std::string, int>> findedWords;
    std::pair<std::string, int> numberOfReps;
    int counter = 0;

    std::sort(diseases.begin(), diseases.end());
    for (int itOfDiseases = 0; itOfDiseases < diseases.size(); ++itOfDiseases) {
        for (int itOfWeight = 0; itOfWeight < diseases.size(); ++itOfWeight) {
            if (diseases[itOfDiseases] == diseases[itOfWeight]) {
                counter++;
            }
        }
        numberOfReps = {diseases[itOfDiseases], counter};
        findedWords.push_back(numberOfReps);
        counter = 0;
    }
    std::vector<int> usedNumbers;
    for (auto iterator = findedWords.begin(); iterator != findedWords.end(); ++iterator) {
        usedNumbers.push_back(iterator->second);
    }

    std::sort(usedNumbers.begin(), usedNumbers.end());
    std::reverse(usedNumbers.begin(), usedNumbers.end());
    usedNumbers.erase(unique(usedNumbers.begin(), usedNumbers.end()), usedNumbers.end());
    findedWords.erase(unique(findedWords.begin(), findedWords.end()), findedWords.end());

    std::string showConcordance;
    for (auto secondIt = usedNumbers.begin(); secondIt != usedNumbers.end(); ++secondIt) {
        for (auto iterator = findedWords.begin(); iterator != findedWords.end(); ++iterator) {
            if (*secondIt == iterator->second && iterator->second != 1) {
                if (*secondIt == 2) {
                    showConcordance = "2 matches indicate a 35% probability that the patient will develop: ";
                    strShowSortedDiseases << showConcordance << iterator->first << "\n";
                }
                if (*secondIt >= 3) {
                    showConcordance = "3 or more matches indicate a 65% probability that the patient will develop: ";
                    strShowSortedDiseases << showConcordance << iterator->first << " ";
                }
            } else { strShowSortedDiseases << ""; }
        }
    }
    return strShowSortedDiseases.str();
}