#include "RunGame.h"
#include "raylib.h"
#include "Gameloop.h"
#include <iostream>

void RunGame()
{
    // Initialization
   //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);
    SetRandomSeed(time(NULL));
    InitGame();

    while (!WindowShouldClose())
    {
        UpdateGame();


        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawGame();
  
        EndDrawing();

    }


    CloseWindow();


}
