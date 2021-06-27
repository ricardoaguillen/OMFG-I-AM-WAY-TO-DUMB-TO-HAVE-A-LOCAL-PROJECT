//
// Created by Madera_Eonica on 18/6/2021.
//
//
#include "Analisis3.h"

//std::string task(std::string data){
//    int count=0;
//    std::size_t found = enfermedades.find(hilera?); (buscar en el adn del paciente);
//    for(){
//        if(found!=std::string::npos){
//            count++;
//            insertar a lista
//        }
//    }
//    for( para leer la lista ){
//        if(count <=2){
//            std::cout <<"Not important";
//        }else{
//            if(count=2){ std::cout << "2 concordancias indican una posibilidad de 35%" << found << '\n';}
//            else{
//                if (count>=3){
//                    std::cout<< " 3 o más concordancias indican un 65% de\n"
//                                "probabilidad que el paciente desarrolle dichas condiciones de salud.";
//                }
//            }
//        }
//    }
//}
//
//std::string Analisis3::analiseMultiplePatients(ListOfPatients &patients) {
//    int count = 1;
//    std::vector<std::string> newVecOfDiseases;
//    newVecOfDiseases = Analisis1::parseDiseases(patients.getPatients().begin()->getPossibleDisease());
//    ListOfDiseases listOfDiseases( CsvFile::read("../../../App1Proyecto/files/archivo_csv/enfermedades.csv") );
//
//    for (auto iterator = newVecOfDiseases.begin(); iterator != newVecOfDiseases.end(); ++iterator) {
//        // Use iterator como si fuera el vector de deseases que está en el output
//        // Y list of deseases contiene toda la lista de enfermedades existentes
//
//        if ( <= 2) {
//            std::cout << "Not important";
//        }
//        else {
//            if (count = 2) {
//                std::cout << "2 concordancias indican una posibilidad de 35%" << '\n';
//                else{
//                    if (count >= 3) {
//                        std::cout << " 3 dichas condiciones de salud.";
//                    }
//                }
//            }
//        }
//    }
//}

//vector<Enfermedad*>* Enfermedades::AnalisisPersona(Persona& persona){
//    auto lista = new vector<Enfermedad*>();
//    std::smatch mt;
//    for (auto& enf:this->lista){
//        if (persona.getADN().find(enf->getCoincidencia()) != string::npos)
//            lista->push_back(enf);
//    }
//    return lista;
//}