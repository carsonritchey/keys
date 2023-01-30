#include "raylib.h"
#include "config.h"

#include "game.h"

int main(void) {
    Game game;

    while(game.running) {
        game.update();
        game.render();
    }
    
    return 0;
}
