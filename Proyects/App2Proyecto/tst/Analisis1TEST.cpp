//
// Created by Madera_Eonica on 26/6/2021.
//
#include "Analysis1.h"
#include "ListOfPatients.h"
#include "JsonFile.h"
#include <vector>
#include "gtest/gtest.h"

TEST(Analisis1TEST, ShowFromMostToLeastTEST){
    Analysis *testAnalysis = new Analysis1;
    ListOfPatients listOfPatients(JsonFile::deserialize(JsonFile::read("../../files/data.json")));
    std::cout << "Sorted: " << testAnalysis->analiseMultiplePatients(listOfPatients);
    delete testAnalysis;
}