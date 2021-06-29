//
// Created by Madera_Eonica on 24/6/2021.
//

#include "BinaryFile.h"
#include <sstream>

void BinaryFile::save(ListOfPatients &listOfPatients, const std::string &filename) {
    std::ofstream saveFile(filename, std::ios::binary | std::ios::trunc);
    for(auto &iteratorOfPatients: listOfPatients.getPatients()){
       saveFile.write((char *) &iteratorOfPatients, sizeof(iteratorOfPatients));
;
    }
}

ListOfPatients BinaryFile::read(const std::string &filename) {
    try {
        ListOfPatients list;
        Patient patient;
        std::ifstream loadFile(filename, std::ios::in | std::ios::binary);
        while (loadFile.read((char *) &patient, sizeof(patient.getName()))) {
            list.add(patient);
        }
        return list;
    }
    catch (std::ifstream::failure e) {
        throw std::runtime_error("Exception opening/reading/closing file");
    }
}
