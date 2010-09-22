#ifndef GAME_H
#define GAME_H

#include "Screen.hpp"

class Game : public Screen
{
    public:
        /**
         * Default constructor
         */
        Game();

        /**
         * Default destructor
         */
        virtual ~Game();

        /**
         * Lancer le jeu
         */
        virtual int Run(sf::RenderWindow& App);
    private:
};

#endif // GAME_H
