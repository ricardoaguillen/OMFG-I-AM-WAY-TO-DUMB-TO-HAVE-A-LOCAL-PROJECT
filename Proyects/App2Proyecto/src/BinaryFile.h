//
// Created by Madera_Eonica on 24/6/2021.
//

#ifndef PRODUCTMANAGER_BINARYFILE_H
#define PRODUCTMANAGER_BINARYFILE_H

#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "ListOfPatients.h"
#include "BinaryProxy.h"

class BinaryFile {
public:
    static void save(ListOfPatients &listOfPatients, const std::string &filename);

    static ListOfPatients read(const std::string &filename);

    static std::ofstream openSaveBinaryFile(const std::string &filename);

    static std::ifstream openReadBinaryFile(const std::string &filename);
};

#endif //PRODUCTMANAGER_BINARYFILE_H
