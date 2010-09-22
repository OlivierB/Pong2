/**
 **************************
 *                        *
 *         PONG           *
 *                        *
 **************************
 * @author Quentin Lebourgeois
 * @author Erwan Matrat
 * @author Charles Daumont
 * @author Olivier Blin
 */

////////// STL /////////////
#include <iostream>
#include <string>
#include <vector>

////////// SFML /////////////
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
// Constants
#include "include/constants.hpp"
// Fonctions
#include "include/flux.hpp" // flux de convertion

using namespace std;

// Prototypes
void getParamProgram(int argc, char *argv[], std::string &fileName, int &speed);


int main(int argc, char *argv[]) {
    // initialisation des parametres
    std::string nomFichier;
    int vitesse;
    getParamProgram(argc, argv, nomFichier, vitesse);
    cout << "nom du fichier : " << nomFichier << "  vitesse : " << vitesse << endl;
    return 0;
}

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
        else { // si ce n'est pas la premiere case du tableau (qui contient le nom du programme)
            if(i > 0 && tmp.size() > 2 && fileName == "") {
                fileName = tmp;
            }
        }
    }
}
