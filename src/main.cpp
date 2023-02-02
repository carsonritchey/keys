#include "raylib.h"
#include "config.h"

#include "game.h"
#include "note.h"

#include <vector>

int main(void) {
    Game game;

    std::vector<Note> notes;

    notes.push_back(Note(50, 100, note::a));
    notes.push_back(Note(50, 140, note::d));
    notes.push_back(Note(50, 180, note::f));

    while(game.running) {
        game.update();
        game.render();

        for(Note n : notes) {
            n.tick();
            n.draw();
        }

    }
    
    return 0;
}
