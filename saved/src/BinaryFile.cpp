//
// Created by Madera_Eonica on 24/6/2021.
//

#include "BinaryFile.h"

void BinaryFile::save(ListOfPatients &listOfPatients, const std::string &filename) {
    std::ofstream saveFile(filename, std::ios::binary);
    for(auto &iteratorOfPatients: listOfPatients.getPatients()){
       saveFile.write((char *) &iteratorOfPatients, sizeof(iteratorOfPatients));
    }
    saveFile.close();
}

std::string BinaryFile::read(const std::string &filename) {
    ListOfPatients list;
    Patient patient;
    std::ifstream loadFile(filename, std::ios::binary);
    while(loadFile.read((char*) & patient, sizeof(patient))){
        list.add(patient);
    }
    loadFile.close();
    return list.toString();
}
