//
// Created by Madera_Eonica on 18/6/2021.
//

#include "Analysis1.h"

Analysis1::Analysis1() {

}

Analysis1::~Analysis1() {

}

std::string Analysis1::task(std::string data) {
    std::stringstream stringstreamSusceptibility;
    stringstreamSusceptibility << sortDiseases(parseDiseases(data));
    return stringstreamSusceptibility.str();
}

std::string Analysis1::analiseMultiplePatients(ListOfPatients &patients) {
    std::stringstream strSortDiseases;
    for (auto itOfPatients = patients.getPatients().begin();
         itOfPatients != patients.getPatients().end(); ++itOfPatients) {
        strSortDiseases.precision(0);
        strSortDiseases << "Patient Name: " << itOfPatients->getName() << std::endl;
        strSortDiseases << "ID: " << std::fixed << itOfPatients->getId() << std::endl;
        strSortDiseases << task(itOfPatients->getPossibleDisease()) << std::endl << std::endl;
    }
    return strSortDiseases.str();
}

std::string Analysis1::sortDiseases(std::vector<std::string> diseases) {
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

    for (auto secondIt = usedNumbers.begin(); secondIt != usedNumbers.end(); ++secondIt) {
        for (auto iterator = findedWords.begin(); iterator != findedWords.end(); ++iterator) {
            if (*secondIt == iterator->second && iterator->second != 1) {
                int justLoop = *secondIt;
                while (justLoop > 0) {
                    strShowSortedDiseases << iterator->first << " ";
                    justLoop--;
                }
            }
        }
    }

    for (auto iterator = findedWords.begin(); iterator != findedWords.end(); ++iterator) {
        if (iterator->second == 1) {
            strShowSortedDiseases << iterator->first << " ";
        }
    }
//    //Uncomment to confirm the frequency of the words.
//    for (auto show = usedNumbers.begin(); show != usedNumbers.end(); ++show) {
//        strShowSortedDiseases << *show << " ";
//    }

    return strShowSortedDiseases.str();
}