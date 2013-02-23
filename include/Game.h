#ifndef GAME_H
#define GAME_H
#include "Player.h"

class Game
{
    public:
        Game();
        void play();
        virtual ~Game();
    protected:
    private:
        void generateRooms();
        Player player;
};

#endif // GAME_H
