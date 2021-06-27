//
// Created by Madera_Eonica on 25/6/2021.
//
#include <JsonFile.h>
#include "../googletest/include/gtest/gtest.h"

TEST(JsonTEST, JsonSave) {
    EXPECT_NO_THROW(ListOfPatients exampleOfListOfPatients);
    EXPECT_NO_THROW(JsonFile::deserialize(JsonFile::read("../../files/Patients.json")));
    ListOfPatients listOfPatients( JsonFile::deserialize(JsonFile::read("../../files/Patients.json") ) );
    EXPECT_NO_THROW(JsonFile::save(JsonFile::serialize(listOfPatients),"../../files/JsonTest.json"));
    JsonFile::save(JsonFile::serialize(listOfPatients),"../../files/JsonTest.json");
    ASSERT_NO_THROW(listOfPatients.toString());
//  std::cout << listOfPatients.toString() << std::endl;
}

TEST(JsonTEST, JsonRead) {
    EXPECT_NO_THROW(ListOfPatients exampleOfListOfPatients);
    EXPECT_NO_THROW(JsonFile::deserialize(JsonFile::read("../../files/Patients.json")));
    EXPECT_NO_THROW(JsonFile::read("../../files/Patients.json"));
    ListOfPatients listOfPatients( JsonFile::deserialize(JsonFile::read("../../files/Patients.json") ) );
    ASSERT_NO_THROW(listOfPatients.toString());
//  std::cout << listOfPatients.toString() << std::endl;
}

TEST(JsonTEST, JsonDeserialize) {
    EXPECT_NO_THROW(ListOfPatients exampleOfListOfPatients);
    EXPECT_NO_THROW(JsonFile::deserialize(JsonFile::read("../../files/Patients.json")));
    ListOfPatients listOfPatients( JsonFile::deserialize(JsonFile::read("../../files/Patients.json") ) );
    ASSERT_NO_THROW(listOfPatients.toString());
//  std::cout << listOfPatients.toString() << std::endl;
}

TEST(JsonTEST, JsonSerialize) {
    EXPECT_NO_THROW( ListOfPatients listOfPatients );
    EXPECT_NO_THROW(JsonFile::deserialize(JsonFile::read("../../files/Patients.json")));
    ListOfPatients listOfPatients( JsonFile::deserialize(JsonFile::read("../../files/Patients.json") ) );
    JsonFile::save(JsonFile::serialize(listOfPatients),"../../files/JsonTest.json");
    EXPECT_NO_THROW(JsonFile::save(JsonFile::serialize(listOfPatients),"../../files/JsonTest.json"));
    ASSERT_NO_THROW(listOfPatients.toString());
//  std::cout << listOfPatients.toString() << std::endl;
}
