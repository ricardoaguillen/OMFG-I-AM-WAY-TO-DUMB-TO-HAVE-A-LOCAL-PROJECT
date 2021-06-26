//
// Created by Madera_Eonica on 25/6/2021.
//

#include <CsvFile.h>
#include "../googletest/include/gtest/gtest.h"

TEST(CsvTEST, SavingACSVFileTEST){
    ListOfDiseases listOfDiseases;
    Disease testDisease1("l'Intoxication Impossible","TCATG");
    Disease testDisease2("la Bronchite Horrible","GTACT");
    listOfDiseases.add(testDisease1);
    listOfDiseases.add(testDisease2);
    CsvFile::save(listOfDiseases,"../../files/CSVTest.csv");
//  std::cout << listOfDiseases.toString();
    ASSERT_NO_THROW(listOfDiseases.toString() );
}

TEST(CsvTEST, ReadingACSVFileTEST){
    ListOfDiseases listOfDiseases(CsvFile::read("../../files/CSVTest.csv"));
    ASSERT_NO_THROW(listOfDiseases.toString());
//  std::cout << listOfDiseases.toString();
}