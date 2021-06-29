//
// Created by:
//  - Ricardo Guillen Porras .
//  - Royer Zuñiga Villarreal.
//  - Maria Angelica Robles.
//
#include "JsonFile.h"

void to_json(json &_json, const ListOfPatients &listOfPatients) {
    json jPatient;
    auto jPatientList = json::array();
    for (const Patient &patient : listOfPatients.getPatients()) {
        jPatient["ID"] = patient.getId();
        jPatient["Nombre"] = patient.getName();
        jPatient["Telefono"] = patient.getPhoneNumber();
        jPatient["Correo"] = patient.getEmail();
        jPatient["Secuencia"] = patient.getSequence();
        jPatient["Diseases"] = patient.getPossibleDisease();
        jPatientList.push_back(jPatient);
    }
    _json = jPatientList;
}

void from_json(const json &_json, ListOfPatients &list_) {
    ListOfPatients listOfPatients;
    json patientData = _json;
    for (auto &data : patientData) {
            Patient tempPatient;
            tempPatient.setId(data.at("ID").get<double>() );
            tempPatient.setName(data.at("Nombre").get<std::string>() );
            tempPatient.setPhoneNumber(data.at("Telefono").get<std::string>());
            tempPatient.setEmail(data.at("Correo").get<std::string>());
            tempPatient.setSequence(data.at("Secuencia").get<std::string>());
            listOfPatients.add(tempPatient);
    }
    list_.setPatients(listOfPatients.getPatients());
}

std::string JsonFile::serialize(ListOfPatients &listOfPatients) {
    json jsonData(listOfPatients);
    std::string jsonArray = jsonData.dump(4);
    return jsonArray;
}

ListOfPatients JsonFile::deserialize(const std::string &_data) {
    json jsonData = json::parse(_data);
    ListOfPatients patientList = jsonData;
    return patientList;
}
