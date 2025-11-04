#include "Screens.h"
#include "raylib.h"
#include "GameOverScreen.h"
#include "Obstacles.h"

void DrawCurrentScreen()
{

	switch (currentState)
	{
	case MENU:
		DrawText("Version 0.2", 1, 1, 20, RED);
		DrawText("PRESS ENTER TO START", 200, 200, 30, GREEN);
		DrawText("PRESS C TO CREDITS", 200, 300, 30, GREEN);
		DrawText("PRESS ESC TO EXIT", 200, 350, 30, GREEN);
		break;

	case PLAYING:
		DrawPlayer();
		DrawObstacles();
		break;
	case CREDITS:
		DrawText("Created by dolores caparroz", 200, 200, 30, GREEN);
		DrawText("Press B to main menu", 200, 250, 30, GREEN);
		break;
	case GAME_OVER:
		DrawGameOver();
		break;
	}

}
