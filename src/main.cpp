#include "raylib.h"
#include "config.h"

#include "game.h"
#include "note.h"

int main(void) {
    Game game;

    Note note(50, 100, note::a);

    while(game.running) {
        game.update();
        game.render();

        note.tick();
        note.draw();
    }
    
    return 0;
}
