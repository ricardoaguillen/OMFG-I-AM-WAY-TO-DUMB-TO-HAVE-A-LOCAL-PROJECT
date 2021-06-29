//
// Created by Madera_Eonica on 28/6/2021.
//

#include "JsonAdapter.h"

void JsonAdapter::save(const std::string &jsonData, const std::string &filename) {
    std::ofstream file(filename, std::ofstream::out);
    file << jsonData;
    file.close();
}

std::string JsonAdapter::read(const std::string &filename) {
    std::string txtContent;
    try {
        std::ifstream file(filename);
        file.exceptions(std::ifstream::failbit | std::ifstream::badbit);

        std::stringstream buffer;
        buffer << file.rdbuf();
        std::string fileContent(buffer.str());
        txtContent = fileContent;
    }

    catch (std::ifstream::failure e) {
        throw std::runtime_error("Exception opening/reading/closing file");
    }

    return txtContent;
}