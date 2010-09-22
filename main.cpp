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
// Screens
#include "include/Screen.hpp"
#include "include/Game.hpp"
// Fonctions
#include "include/commandLineReader.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    // Initialisation des parametres
    std::string filename = "undefined";
    int speed = 0, currentScreen = 0;

    // Récupération des arguments de l'executable
    getParamProgram(argc, argv, filename, speed);

    // Création des screens et stockage
    vector<Screen*> screens;
    screens.push_back(new Game);

    // Affichage
    cout << "*** Pong 2 ***" << endl;
    cout << "> Niveau : " << filename << endl;
    cout << "> Vitesse : " << speed << endl;

    // Fenêtre de rendu
    sf::RenderWindow App(sf::VideoMode(600, 430, 32), GAME_NAME, sf::Style::Close);

    while (currentScreen != -1) {
        screens[currentScreen]->Run(App);
    }

    //system("PAUSE");
    return 0;
}
