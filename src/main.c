#include "raylib.h"
#include "config.h"

int main(void) {
    InitWindow(WIN_W, WIN_H, WIN_NAME);

    SetTargetFPS(target_fps);

    int x = 10;
    int y = 10;

    while(!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("omg it works", x, y, 70, LIGHTGRAY);

        if(IsKeyDown(KEY_LEFT)) x -= 5;
        if(IsKeyDown(KEY_RIGHT)) x += 5;
        if(IsKeyDown(KEY_UP)) y -= 5;
        if(IsKeyDown(KEY_DOWN)) y += 5;

        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}
