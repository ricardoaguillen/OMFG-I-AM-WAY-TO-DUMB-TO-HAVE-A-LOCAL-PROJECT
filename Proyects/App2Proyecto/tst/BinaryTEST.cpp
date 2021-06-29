//
// Created by Madera_Eonica on 25/6/2021.
//
#include <BinaryFile.h>
#include <JsonFile.h>
#include "../googletest/include/gtest/gtest.h"

TEST(BinaryTEST, SavingABinaryFileTEST) {
    EXPECT_NO_THROW( ListOfPatients examplePatients );
    ASSERT_NO_THROW(ListOfPatients exampleList(JsonFile::deserialize(
                                                                    JsonFile::read("../../../App1Proyecto/files/datos_geneticos.json"))));
    ListOfPatients listOfPatients( JsonFile::deserialize(JsonFile::read("../../../App1Proyecto/files/datos_geneticos.json") ) );
    ASSERT_NO_THROW(listOfPatients.toString());
    //To See The Output Uncomment
    //std::cout << listOfPatients.toString();
    ASSERT_NO_THROW(BinaryFile::save(listOfPatients,"../../files/TestBinaryFile.dat"));
    BinaryFile::save(listOfPatients,"../../files/base_datos.dat");
}

//TEST(BinaryTEST, ReadingABinaryFileTEST) {
//   EXPECT_NO_THROW(  ListOfPatients testList(BinaryFile::read("../../files/base_datos.dat")); );
//    //To See The Output Uncomment
//    ListOfPatients list(BinaryFile::read("../../files/base_datos.dat"));
//    std::cout << list.toString();
//}
//
