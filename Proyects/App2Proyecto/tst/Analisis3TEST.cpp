//
// Created by Madera_Eonica on 26/6/2021.
//

#include "Analysis3.h"
#include "JsonFile.h"
#include "gtest/gtest.h"

TEST(Analisis3TEST, ProbOfDevelopingDiseaseTEST){
    Analysis *testAnalysis = new Analysis3;
    ListOfPatients listOfPatients(JsonFile::deserialize(JsonFile::read("../../files/data.json")));
    std::cout << "Output: " << testAnalysis->analiseMultiplePatients(listOfPatients);
    delete testAnalysis;
}