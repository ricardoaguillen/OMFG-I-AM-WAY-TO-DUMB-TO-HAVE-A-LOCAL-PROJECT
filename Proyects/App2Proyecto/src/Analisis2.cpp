//
// Created by Madera_Eonica on 18/6/2021.
//

#include "Analisis2.h"
#include <bits/stdc++.h>

std::string Analisis2::task(std::string data) {
    int countA = 0, countT = 0, countG = 0, countC = 0, sizeOfData = data.size();

    countA = findNumOf('A',data);
    countT = findNumOf('T',data);
    countG = findNumOf('G',data);
    countC = findNumOf('C',data);

    std::stringstream finalData;
    finalData << "Percentage of A's: " << percentage(countA,sizeOfData) << "%" << std::endl;
    finalData << "Percentage of T's: " << percentage(countT,sizeOfData) << "%" << std::endl;
    finalData << "Percentage of G's: " << percentage(countG,sizeOfData) << "%" << std::endl;
    finalData << "Percentage of C's: " << percentage(countC,sizeOfData) << "%" << std::endl;

    return finalData.str();
}

int Analisis2::percentage(int num,int size) {
    return num*100/size;
}

int Analisis2::findNumOf(char x,std::string data) {
    int counter = 0;
    for (int i = 0; i < data.size(); i++)
        if(data[i] == x) counter++;
    return counter;
}

std::string Analisis2::analiseMultiplePatients(ListOfPatients &patients) {
    std::stringstream strOutput;
    for(auto patientIterator = patients.getPatients().begin(); patientIterator != patients.getPatients().end(); ++patientIterator){
        strOutput.precision(0);
        strOutput << "Patient: " << patientIterator->getName() << ", ";
        strOutput << std::fixed << "ID: " << patientIterator->getId() << std::endl;
        strOutput << task(patientIterator->getSequence()) << std::endl;
    }
    return strOutput.str();
}
