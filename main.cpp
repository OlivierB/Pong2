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
    // Initialisation des parametres
    std::string filename = "undefined";
    int speed = 0;
    // Récupération des arguments de l'executable
    getParamProgram(argc, argv, filename, speed);

    // Affichage
    cout << "*** Pong 2 ***" << endl;
    cout << "> Niveau : " << filename << endl;
    cout << "> Vitesse : " << speed << endl;

    //system("PAUSE");
    return 0;
}
