// STL
#include <iostream>
#include <string>
#include <vector>
// SFML
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
// Header
#include "../include/Game.hpp"

Game::Game()
{
    //ctor
}

Game::~Game()
{
    //dtor
}

int Game::Run(sf::RenderWindow& App) {
    bool run = true;

    while (run) {
         // Traitement des évènements
        sf::Event Event;
        while (App.GetEvent(Event))
        {
            // Fenêtre fermée : on quitte
            if (Event.Type == sf::Event::Closed)
                App.Close();
        }

        // Efface l'écran (remplissage avec du noir)
        App.Clear();

        // Affichage du contenu de la fenêtre à l'écran
        App.Display();
    }

    return EXIT;
}
