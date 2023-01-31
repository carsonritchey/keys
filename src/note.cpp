#include "note.h"

Note::Note(int _x, int _y, note::Type _type) {
    pos = (struct Vector2){_x, _y};
    type = _type;

    rotation = 0;
    scale = 3;

    tint = (struct Color){255, 255, 255, 255};

    switch(type) {
        case note::a:
            texture = LoadTexture("img/a.png");
            break;
    }
}

Note::~Note() {
    UnloadTexture(texture);
}

void Note::draw() {
    DrawTextureEx(texture, pos, rotation, scale, tint);
}

void Note::tick() {
    pos.x++; 
}