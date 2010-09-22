// STL
#include <iostream>
#include <string>
// Stream conversion
#include "../include/convert.hpp"

using namespace std;

void getParamProgram(int argc, char *argv[], std::string &fileName, int &speed) {
    // Déclaration des variables
    string tmp, tmpVal;

    // initialisation des variables
    fileName = "";
    speed = 0;

    // Traitement
    // parcourir le tableau de caracteres du main
    for(int i = 0; i < argc; i++) {
        tmp = argv[i];
        // traitement du parametre de vitesse
        if(tmp == "-v" && (i+1) < argc && speed == 0) {
            tmpVal = argv[(i+1)];
            speed = stringToInt(tmpVal);
            i++; // pour ne pas retomber sur le i qui contient la valeur de la vitesse
        }
        // si ce n'est pas la premiere case du tableau (qui contient le nom du programme)
        else {
            if(i > 0 && tmp.size() > 2 && fileName == "") {
                fileName = tmp;
            }
        }
    }
}
