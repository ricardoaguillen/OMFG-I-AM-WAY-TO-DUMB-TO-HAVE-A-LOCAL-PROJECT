//
// Created by Madera_Eonica on 25/6/2021.
//

#include <ListOfDiseases.h>
#include <CsvFile.h>
#include "../googletest/include/gtest/gtest.h"
#include <locale.h>

TEST(ListOfDiseasesTEST, CreateListOfDiseasesFromJsonTEST) {
    setlocale(LC_ALL, "");
    EXPECT_NO_THROW( ListOfDiseases exampleDiseases( CsvFile::read("../../files/archivo_csv/enfermedades.csv") ));
    ListOfDiseases listOfDiseases( CsvFile::read("../../files/archivo_csv/enfermedades.csv") );
    EXPECT_NO_THROW( listOfDiseases.toString() );
//  std::cout << listOfDiseases.toString() << std::endl;
}
TEST(ListOfDiseasesTEST, CreateNewListOfDiseasesTEST) {
    setlocale(LC_ALL, "");
    EXPECT_NO_THROW( ListOfDiseases exampleDiseases);
    ListOfDiseases listOfDiseases;
    Disease testDisease1("l'Intoxication Impossible","TCATG");
    Disease testDisease2("la Bronchite Horrible","GTACT");
    listOfDiseases.add(testDisease1);
    listOfDiseases.add(testDisease2);
    EXPECT_NO_THROW( listOfDiseases.toString() );
//  std::cout << listOfDiseases.toString() << std::endl;
}
