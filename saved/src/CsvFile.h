//
// Created by Madera_Eonica on 24/6/2021.
//

#ifndef PRODUCTMANAGER_CSVFILE_H
#define PRODUCTMANAGER_CSVFILE_H

#include <string>
#include <sstream>
#include <fstream>
#include "ListOfDiseases.h"
#include "Disease.h"

class CsvFile {
public:
    static void save(ListOfDiseases &listOfDiseases, const std::string &filename);

    static ListOfDiseases read(const std::string &filename);
};


#endif //PRODUCTMANAGER_CSVFILE_H
