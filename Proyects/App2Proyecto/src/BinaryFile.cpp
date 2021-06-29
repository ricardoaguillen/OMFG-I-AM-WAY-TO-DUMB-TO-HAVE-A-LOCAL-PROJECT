//
// Created by Madera_Eonica on 24/6/2021.
//

#include "BinaryFile.h"

void BinaryFile::save(ListOfPatients &listOfPatients, const std::string &filename) {
    std::ofstream saveFile = openSaveBinaryFile(filename);
    for(auto iteratorOfPatients = listOfPatients.getPatients().begin();
    iteratorOfPatients != listOfPatients.getPatients().end(); ++iteratorOfPatients){
        saveFile.write((char*)&iteratorOfPatients, sizeof(iteratorOfPatients));
    }
}

ListOfPatients BinaryFile::read(const std::string &filename) {
    try {
        ListOfPatients list;
        Patient patient;
        std::ifstream loadFile = openReadBinaryFile(filename);
        loadFile.seekg(0);
        while (!loadFile.eof()) {
            loadFile.read((char*)&patient, sizeof(patient));
            list.add(patient);
        }
        return list;
    }
    catch (std::ifstream::failure e) {
        throw std::runtime_error("Exception Opening/Reading/Closing the file");
    }
}

std::ofstream BinaryFile::openSaveBinaryFile(const std::string& filename) {
    std::ofstream saveFile;
    if(BinaryProxy::checkBinaryFile(filename)){
        saveFile.open(filename, std::ios::binary | std::ios::trunc);
        return saveFile;
    }
    else{
        saveFile.close();
        return  saveFile;
    }
}

std::ifstream BinaryFile::openReadBinaryFile(const std::string& filename) {
    std::ifstream readFile;
    if(BinaryProxy::checkBinaryFile(filename)) {
        readFile.open(filename, std::ios::binary | std::ios::trunc);
        return readFile;
    }
    else{
        readFile.close();
        return  readFile;
    }
}