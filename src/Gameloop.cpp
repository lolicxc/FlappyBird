#include "Gameloop.h"
#include "Player.h"
#include "Obstacles.h"
#include "raylib.h"
#include "GameOverScreen.h"
#include "Screens.h"

bool collisionDetected = false;
GameState currentState = MENU;

void InitGame()
{
	InitPlayer();
	InitObstacles();
	collisionDetected = false;
	currentState = MENU;
}

void UpdateGame()
{


	switch (currentState)
	{
	case MENU:
		if (IsKeyPressed(KEY_ENTER))
			currentState = PLAYING;
		if (IsKeyPressed(KEY_C))
			currentState = CREDITS;
		if (IsKeyPressed(KEY_ESCAPE))
			currentState = EXIT; 
		break;

	case PLAYING:
		UpdatePlayer();
		UpdateObstacles();

		if (CheckCollision() || CheckPlayerBounds())
		{
			collisionDetected = true;
		}

		if (collisionDetected)
		{
			GameOver();
		}
		break;
	case CREDITS:
		if (IsKeyPressed(KEY_B))
			currentState = MENU;
		break;

	case GAME_OVER:
		if (IsKeyPressed(KEY_ENTER))
			InitGame(); 
		break;
	case EXIT:
		break;
	}


}

void DrawGame()
{
	DrawCurrentScreen();
}

bool CheckCollision()
{
	bool hitBottom = player.xPos < obstacle.xPos + obstacle.width &&
		player.xPos + player.width > obstacle.xPos &&
		player.yPos < obstacle.yPos + obstacle.height &&
		player.yPos + player.height > obstacle.yPos;


	float topHeight = GetScreenHeight() - obstacle.height - obstacle.space;

	bool hitTop = player.xPos < obstacle.xPos + obstacle.width &&
		player.xPos + player.width > obstacle.xPos &&
		player.yPos < topHeight &&
		player.yPos + player.height > 0;

	return hitBottom || hitTop;
}


