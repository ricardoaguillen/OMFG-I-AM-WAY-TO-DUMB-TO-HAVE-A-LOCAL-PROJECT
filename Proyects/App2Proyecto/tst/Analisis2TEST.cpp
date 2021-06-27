//
// Created by Madera_Eonica on 26/6/2021.
//
#include "Analisis2.h"
#include "Json.h"
#include "gtest/gtest.h"


TEST(Analisis2TEST, Analisis2TaskTEST) {
    ListOfPatients list(Json::deserialize(Json::read("../../files/data.json")));
    std::cout << Analisis2::analiseMultiplePatients(list);
}