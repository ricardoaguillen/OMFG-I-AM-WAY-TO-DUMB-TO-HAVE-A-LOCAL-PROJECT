//
// Created by Madera_Eonica on 26/6/2021.
//
#include "Analysis2.h"
#include "JsonFile.h"
#include "gtest/gtest.h"


TEST(Analisis2TEST, Analisis2TaskTEST) {
    Analysis *testAnalysis = new Analysis2;
    ListOfPatients list(JsonFile::deserialize(JsonFile::read("../../files/data.json")));
    std::cout << testAnalysis->analiseMultiplePatients(list);
    delete testAnalysis;
}