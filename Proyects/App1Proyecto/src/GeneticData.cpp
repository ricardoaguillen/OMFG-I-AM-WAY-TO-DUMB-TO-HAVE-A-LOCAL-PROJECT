//
// Created by Madera_Eonica on 24/6/2021.
//

#include <iostream>
#include "GeneticData.h"

GeneticData::GeneticData() {

}

GeneticData::~GeneticData() {

}

std::string GeneticData::findDiseases(Disease disease, Patient patient) {
    int counter = 0;
    std::string diseaseSequence = disease.getSequence();
    std::string patientSequence = patient.getSequence();
    std::stringstream diseasesNames;
    for (int i = 0; i < patientSequence.size(); ++i) {
        if(patientSequence[i] == diseaseSequence[0]){
            for (int j = 0; j < diseaseSequence.size(); ++j) {
                if (patientSequence[i+counter] == diseaseSequence[j]) counter++;
                if(counter == diseaseSequence.size()){
                    diseasesNames << disease.getDiseaseName() << ",";
                }
            }
        }
        counter = 0;
    }
    return diseasesNames.str();
}
