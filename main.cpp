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

// STL
#include <iostream>
#include <string>
#include <vector>
// SFML
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
// Constants
#include "include/constants.hpp"
// Fonctions
#include "include/commandLineReader.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    // initialisation des parametres
    std::string nomFichier;
    int vitesse;
    getParamProgram(argc, argv, nomFichier, vitesse);
    cout << "nom du fichier : " << nomFichier << "  vitesse : " << vitesse << endl;
    return 0;
}
