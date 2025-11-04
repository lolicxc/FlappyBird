#include "GameOverScreen.h"
#include "raylib.h"

void GameOver()
{

    if (currentState == PLAYING) // solo si estamos en PLAYING
    {
        currentState = GAME_OVER;
        player.isAlive = false;
    }

}

void DrawGameOver()
{
	DrawText("GAME OVER", 300, 200, 40, RED);
    DrawText("PRESS ENTER TO MAIN MENU", 300, 250, 20, RED);
}
