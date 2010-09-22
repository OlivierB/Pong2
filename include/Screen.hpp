#ifndef SCREEN_H
#define SCREEN_H


class Screen
{
    public:
        /** Default constructor */
        Screen();
        /** Default destructor */
        virtual ~Screen();
        /** */
        virtual int Run(sf::RenderWindow& App) = 0;

    private:
};

enum {
    EXIT = -1,
    GAME = 0,
    SCORES = 1,
};

#endif // SCREEN_H
