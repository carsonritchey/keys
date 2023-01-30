#include "game.h"

Game::Game() {
    InitWindow(WIN_W, WIN_H, WIN_NAME);
    SetTargetFPS(target_fps);
}

Game::~Game() {
    CloseWindow();
}

void Game::update() {
    if(WindowShouldClose()) this->running = false;
}

void Game::render() {
    BeginDrawing();

    ClearBackground((struct Color){255, 255, 255, 255});
    DrawText("sdkfjsdfjn", 10, 10, 70, (struct Color){150, 150, 150, 255});

    EndDrawing();
}