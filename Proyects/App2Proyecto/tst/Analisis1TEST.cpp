//
// Created by Madera_Eonica on 26/6/2021.
//
#include "Analisis1.h"
#include "ListOfPatients.h"
#include "Json.h"
#include <vector>
#include "gtest/gtest.h"

TEST(Analisis1TEST, ShowFromMostToLeastTEST){
    ListOfPatients list(Json::deserialize(Json::read("../../files/data.json")));
    std::cout << list.getPatients().begin()->getPossibleDisease() << std::endl;
    std::vector<std::string> testvec = Analisis1::parseDiseases(list.getPatients().begin()->getPossibleDisease());
    for(auto i = testvec.begin(); i != testvec.end(); ++i){
        std::cout <<  *i << std::endl;
    }
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "Sorted: " << Analisis1::sortDiseases(testvec);
//    for(auto i = testvec.begin(); i != testvec.end(); ++i){
//        std::cout << "You have Disease: " << *i << std::endl;
//    }

}