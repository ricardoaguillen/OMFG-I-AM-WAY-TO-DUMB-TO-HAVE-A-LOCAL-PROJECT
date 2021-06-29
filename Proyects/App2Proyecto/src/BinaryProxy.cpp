////
//// Created by Madera_Eonica on 27/6/2021.
////


#include "BinaryProxy.h"

bool BinaryProxy::checkBinaryFile(std::string filename) {
    std::string extention = ".dat";
    int counter = 0;
    for(int extentionIt = extention.size(); extentionIt > 0; --extentionIt) {
        for(int filenameIt = 0; filenameIt < filename.size(); ++filenameIt) {
            if (filename[filenameIt] == extention[extentionIt]) {
                counter++;
                if(counter == extention.size()){
                    return true;
                };
            }
        }
    }
    return false;
}