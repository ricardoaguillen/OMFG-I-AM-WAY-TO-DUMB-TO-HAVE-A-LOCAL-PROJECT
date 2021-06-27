//
// Created by Madera_Eonica on 25/6/2021.
//
#include <ListOfPatients.h>
#include <JsonFile.h>
#include "../googletest/include/gtest/gtest.h"
#include <locale.h>


TEST(ListOfPatientsTEST, CreateNewListOfPatientsTEST) {
    setlocale(LC_ALL, "");
    EXPECT_NO_THROW( ListOfPatients examplePatients );
    Patient testPatient1(2312341234,"Pepe", "221231234", "pepito@hotmail.com",
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
                        "CGTCACCATGAACGCGCCGACCGGCTTATGCGGACAGCGTAGCCA");

    Patient testPatient2(12312414,"Pedro", "22412314512", "pedrito@hotmail.com",
                        "CAGAAAACCACAGGCCAAGGAGAAACGGATGGGAATTCAGAGAAC"
                        "AATTTGAGGGAAGCTGTCGCCGGACGCCGGGTCAACCTGTACCAT"
                        "CAATGCGGGGGGGGGCGTTTCTAAAAGACGAAAAAGAGCCGCTGA"
                        "TCTTGAAGCGCACGACCGGTCGGCCTCTAGGAAAACCTGTCAGAC"
                        "ACTGCTCGGCGGCTGGAAGTCAAGAGGCGTCACGCGAAGGCAGAT"
                        "GCGGTAGACACGACCATGACTCGTAACGTCCAAACCCAAGGAAAG"
                        "CTAGGATGAAAGCCTCGATGGGCGAAGCAGGATGGAGCGCTGCAA"
                        "GGGCGAAGCAACAGAAAGCGGAGAGCGGAGTAGGCAATTCAGTGT"
                        "TGCCCGCTCGCGAGAGGGCTCCCAAGACAATGCGTACACAATGGG"
                        "AGGAATGACTGCTTGCTCGAGGAAAACAAAACCTCCTAAAGAGCT");
    ListOfPatients listOfPatients;
    listOfPatients.add(testPatient1);
    listOfPatients.add(testPatient2);
    ASSERT_NO_THROW(listOfPatients.toString());
//  std::cout << listOfPatients.toString();
}


TEST(ListOfPatientsTEST, CreateListOfPatientsFromJsonEST) {
    setlocale(LC_ALL, "");
    EXPECT_NO_THROW( ListOfPatients examplePatients );
    ListOfPatients listOfPatients( JsonFile::deserialize(JsonFile::read("../../files/Patients.json") ) );
    ASSERT_NO_THROW(listOfPatients.toString());
//  std::cout << listOfPatients.toString();
}

