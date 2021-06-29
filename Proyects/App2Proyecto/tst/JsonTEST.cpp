//
// Created by Madera_Eonica on 25/6/2021.
//
#include <JsonFile.h>
#include "../googletest/include/gtest/gtest.h"

TEST(JsonTEST, JsonDeserialize) {
    EXPECT_NO_THROW(ListOfPatients exampleOfListOfPatients);
    EXPECT_NO_THROW(JsonFile::deserialize(JsonFile::read("../../../App1Proyecto/files/datos_geneticos.json")));
    ListOfPatients listOfPatients( JsonFile::deserialize(JsonFile::read("../../../App1Proyecto/"
                                                                              "files/datos_geneticos.json") ) );
    ASSERT_NO_THROW(listOfPatients.toString());
    //std::cout << listOfPatients.toString() << std::endl;
}

TEST(JsonTEST, JsonSerialize) {
    EXPECT_NO_THROW( ListOfPatients listOfPatients );
    EXPECT_NO_THROW(JsonFile::deserialize(JsonFile::read("../../../App1Proyecto/files/datos_geneticos.json")));
    ListOfPatients listOfPatients( JsonFile::deserialize(JsonFile::read("../../../App1Proyecto/"
                                                                              "files/datos_geneticos.json")));
    EXPECT_NO_THROW(JsonFile::save(JsonFile::serialize(listOfPatients),"../../files/SerializeJsonTest.json"));
    JsonFile::save(JsonFile::serialize(listOfPatients),"../../files/SerializeJsonTest.json");
    ASSERT_NO_THROW(listOfPatients.toString());
//   std::cout << listOfPatients.toString() << std::endl;
}

TEST(JsonTEST, JsonReadingFileTEST) {
    EXPECT_NO_THROW(ListOfPatients exampleOfListOfPatients);
    EXPECT_NO_THROW(JsonFile::deserialize(JsonFile::read("../../../App1Proyecto/files/datos_geneticos.json")));
    ListOfPatients listOfPatients(
            JsonFile::deserialize(JsonFile::read("../../../App1Proyecto/files/datos_geneticos.json")));
    ASSERT_NO_THROW(listOfPatients.toString());
//    std::cout << listOfPatients.toString() << std::endl;
}

TEST(JsonTEST, JsonSavingFileTEST) {
    EXPECT_NO_THROW(ListOfPatients exampleOfListOfPatients);
    EXPECT_NO_THROW(JsonFile::deserialize(JsonFile::read("../../../App1Proyecto/files/datos_geneticos.json")));
    ListOfPatients listOfPatients( JsonFile::deserialize(JsonFile::read("../../../App1Proyecto/"
                                                                              "files/datos_geneticos.json")));
    EXPECT_NO_THROW(JsonFile::save(JsonFile::serialize(listOfPatients),"../../files/data.json"));
    ASSERT_NO_THROW(listOfPatients.toString());
//   std::cout << listOfPatients.toString() << std::endl;
}
