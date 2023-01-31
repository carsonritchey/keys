#ifndef NOTE_H
#define NOTE_H

#include "raylib.h"

namespace note {
    enum Type { a, s, d, f, h, j, k, l };
}

class Note {
    public:
        Note(int _x, int _y, note::Type _type);
        ~Note();

        note::Type type;
        Vector2 pos;
        Vector2 endPos;

        float rotation, scale;
        Color tint;

        Texture2D texture;

        void draw();
        void tick();
};

#endif