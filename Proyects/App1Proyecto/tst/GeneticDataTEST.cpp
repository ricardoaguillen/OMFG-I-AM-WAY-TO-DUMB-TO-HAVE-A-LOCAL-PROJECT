//
// Created by Madera_Eonica on 25/6/2021.
//
#include <ListOfPatients.h>
#include <ListOfDiseases.h>
#include <GeneticData.h>
#include <JsonFile.h>
#include <CsvFile.h>
#include "../googletest/include/gtest/gtest.h"
#include <locale.h>


TEST(GeneticData, AnalisePatientSequenceTEST) {
    setlocale(LC_ALL, "");
    EXPECT_NO_THROW( Patient examplePatient );
    EXPECT_NO_THROW( ListOfDiseases exampleDiseases( CsvFile::read("../../files/archivo_csv/enfermedades.csv") ));
    Patient testPatient(2312341234,"Pepe", "221231234", "pepito@hotmail.com",
                                                                 "GGGGCATCCTGGGCCCAATCGCACATTCCAGGGAGGGATACCAGG"
                                                                         "GGCGTCGAGGGGCCGGCAAAGCGGAGGGAAAGCCTCTCGAGGCGG"
                                                                         "ACTAGTGCCGCGCGCTGTCCGACCAAGGAACCTAAACAGTATTGG"
                                                                         "GTGAGGTGGCAAAGATCAGCAATGCAACAAGCAATGTGGGAGCGC"
                                                                         "TCGTAATGAAAACAGCAAAGCCACCCAGGGGATCGGGGCGACGTG"
                                                                         "AGCTAAACTGCATGTGTACCAGAAACTACCGCCCAGTATGTCTGA"
                                                                         "TATGAACCAAACGACGACGCAACCCGCGCAAGGATGGAAAGAGGC"
                                                                         "CTGAGATCCGCACCCCGCAGGGGCACTAAAGCACCCTAACAAAGA"
                                                                         "GCACTGCAAAAATTGGCTAGCATAATACCATTTGATTAAGTAGCC"
                                                                         "CGCATTTGCACATCTGCCAGTGGACAGGCGCGCCTAGAACGCGGT"
                                                                         "CGTCACCATGAACGCGCCGACCGGCTTATGCGGACAGCGTAGCCA"
                                                                         "TTGGGCGAGTAGCACGGTTCAGGGCGAATGAACAGTAGTGAAGAC"
                                                                         "TGAGAAGCCCTCGAAAACTAAAAAGAACAGCGTTGAGTACTGCGA"
                                                                         "ACGCGATATGAACGGATGCCAAAAACAGCAGACTCTATGGCAATA"
                                                                         "TGCCAGGCGGACGAGTCTATAACTCCTGAGGCATCGAAGAGGGAA"
                                                                         "CGCAAGCAACCTCTGACCGACGTTACCAAGGAGTGCCGTAGATAT"
                                                                         "AGAAAACGCGGCAGGCAGGTTGGACGTTCAAGTGTCGTTGAGTAG"
                                                                         "CCGAACAGACCCGGTGCCAAGTTTAGGGGAAATAAAAATCAGCCC"
                                                                         "GCCCCGTCGCAAATTGGAGGAGAAGCGCACGCCCGGTTAACAATC"
                                                                         "GAATCGGGCCAGGGCGAGACACCCGAGGTCACCCGCAAACATAAC"
                                                                         "ACCTTTCATCAGAAGAGCGTCGCGAAGCCCGTGCGATGGGCCGAC"
                                                                         "ACAGTGCTATATCCATTGCTGTGGAGGTCTCAGATGAAAAGCAAG"
                                                                         "GACGTCGCAGCGCGGATCTACAAAAGGCATACCCCAGATATTTAC"
                                                                         "AGTAGAGAGAGTCACATCAGCCCAGCGGCGACCGTGCAGATGTGT"
                                                                         "ACCGCGCCACCGGTGTAAATGCTCGCACAACAACGGGCACGCCGT"
                                                                         "AAGGAGGAGTGTACTAGTACAATTACAGGCATCCGGGCAAATGAG"
                                                                         "CAGAAAACCACAGGCCAAGGAGAAACGGATGGGAATTCAGAGAAC"
                                                                         "AATTTGAGGGAAGCTGTCGCCGGACGCCGGGTCAACCTGTACCAT"
                                                                         "CAATGCGGGGGGGGGCGTTTCTAAAAGACGAAAAAGAGCCGCTGA"
                                                                         "TCTTGAAGCGCACGACCGGTCGGCCTCTAGGAAAACCTGTCAGAC"
                                                                         "ACTGCTCGGCGGCTGGAAGTCAAGAGGCGTCACGCGAAGGCAGAT"
                                                                         "GCGGTAGACACGACCATGACTCGTAACGTCCAAACCCAAGGAAAG"
                                                                         "CTAGGATGAAAGCCTCGATGGGCGAAGCAGGATGGAGCGCTGCAA"
                                                                         "GGGCGAAGCAACAGAAAGCGGAGAGCGGAGTAGGCAATTCAGTGT"
                                                                         "TGCCCGCTCGCGAGAGGGCTCCCAAGACAATGCGTACACAATGGG"
                                                                         "AGGAATGACTGCTTGCTCGAGGAAAACAAAACCTCCTAAAGAGCT"
                                                                         "TAGCCTGGTAATAGGAAATGTGTGTCTGCACGAGAAA");
    Disease testDisease("la Bronchite Horrible","GTACT");
    EXPECT_NO_THROW(GeneticData::findDiseases(testDisease,testPatient));
    testPatient.setPossibleDisease(GeneticData::findDiseases(testDisease,testPatient));
    ASSERT_NO_THROW(testPatient.toString());
    std::cout << testPatient.toString();
}

TEST(ListOfPatientsTEST, AnalisePatientsSequencesTEST) {
    setlocale(LC_ALL, "");
    EXPECT_NO_THROW( ListOfPatients examplePatients );
    EXPECT_NO_THROW( ListOfDiseases exampleDiseases( CsvFile::read("../../files/archivo_csv/enfermedades.csv") ));
    ListOfDiseases listOfDiseases( CsvFile::read("../../files/archivo_csv/enfermedades.csv") );
    ListOfPatients listOfPatients( JsonFile::deserialize(JsonFile::read("../../files/Patients.json") ) );
    EXPECT_NO_THROW(listOfPatients.ProcessGeneticData(listOfDiseases));
    listOfPatients.ProcessGeneticData(listOfDiseases);
    ASSERT_NO_THROW(listOfPatients.toString());
    std::cout << listOfPatients.toString();
    EXPECT_NO_THROW(JsonFile::save(JsonFile::serialize(listOfPatients),"../../files/datos_geneticos.json"));
    JsonFile::save(JsonFile::serialize(listOfPatients),"../../files/datos_geneticos.json");
}