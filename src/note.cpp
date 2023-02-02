#include "note.h"
#include "config.h"

Note::Note(float _x, float _y, note::Type _type) {
    pos = (struct Vector2){_x, _y};
    type = _type;

    rotation = 0;
    scale = 3;

    tint = (struct Color){255, 255, 255, 255};

    switch(type) {
        case note::a:
            texture = LoadTexture("img/a.png");
            break;
        case note::d:
            texture = LoadTexture("img/d.png");
            break;
        case note::f:
            texture = LoadTexture("img/f.png");
            break;
    }
}

Note::~Note() {
}

void Note::draw() {
    DrawTextureEx(texture, pos, rotation, scale, tint);
}

void Note::tick() {
    pos.x++; 
}