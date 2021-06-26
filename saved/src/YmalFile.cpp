////
//// Created by Madera_Eonica on 24/6/2021.
////
//
//#include "YmalFile.h"
//
//void YmalFile::save(const std::string &filename, const std::string &content) {
//    std::ofstream savefile(filename, std::ios::out | std::ios::trunc);
//    savefile << content;
//}
//
//std::string YmalFile::read(const std::string &filename) {
//    YMAL::Node config = YMAL::LoadFile("../../text_files_YMAL/test.yaml");
//    return config["content"].as<std::string>;
//}
