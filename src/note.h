#ifndef NOTE_H
#define NOTE_H

#include "raylib.h"

enum Type { a, s, d, f, h, j, k, l };

class Note {
    public:
        Note(int _x, int _y, Type _type);
        ~Note();

        Type type;
        int x, y;

        Texture2D sprite;

        void draw();
        void tick();
};

#endif 