//
// Created by Madera_Eonica on 24/6/2021.
//

#include "CsvFile.h"

void CsvFile::save(ListOfDiseases &listOfDiseases, const std::string &filename) {
    std::stringstream strCSV;
    std::ofstream saveFile(filename, std::ios::out | std::ios::trunc);
    for (auto &iteratorOfDiseases : listOfDiseases.getDiseases()) {
        strCSV << iteratorOfDiseases.getDiseaseName() << ",";
        strCSV << iteratorOfDiseases.getSequence() << std::endl;
    }
    saveFile << strCSV.str();
}

ListOfDiseases CsvFile::read(const std::string &filename) {
    try {
        std::ifstream readfile(filename, std::ios::in);
        std::string txtContent;
        std::string line, nombre, cadena;
        ListOfDiseases listOfDiseases;
        while (readfile.good()) {
            std::getline(readfile, txtContent, '\n');
            std::stringstream aux(txtContent);
            std::getline(aux, nombre, ',');
            std::getline(aux, cadena);
            if(!readfile.eof()) {
                listOfDiseases.add(Disease(nombre, cadena));
            }
        }
        readfile.close();
        return listOfDiseases;
    }
    catch (std::ifstream::failure e) {
        throw std::runtime_error("Exception opening/reading/closing file");
    }
}

