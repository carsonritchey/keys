#ifndef GAME_H
#define GAME_H

#include "raylib.h"

#include "config.h"

class Game {
    public:
        // constructor & deconstructor
        Game();
        virtual ~Game();

        // variables
        bool running = true;

        // functions
        void update();
        void render();

};

#endif