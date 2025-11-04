#include "Gameloop.h"
#include "Player.h"
#include "Obstacles.h"
#include "raylib.h"

bool collisionDetected = false;

void InitGame()
{
	InitPlayer();
	InitObstacles();
	collisionDetected = false;
}

void UpdateGame()
{	
	UpdatePlayer();
	UpdateObstacles();
	collisionDetected = CheckCollision();

	if (collisionDetected)
	{
		// ResetPlayer();
		// ResetObstacles();
	}
}

void DrawGame()
{
	DrawPlayer();
	DrawObstacles();
	DrawText("Version 0.1", 1, 1, 20, RED);
	if (collisionDetected)
	{
		DrawText("Collision", GetScreenWidth() /2 ,GetScreenHeight() / 2, 20, RED);
	}
}

bool CheckCollision()
{
	return (player.xPos < obstacle.xPos + obstacle.width &&
		player.xPos + player.width > obstacle.xPos &&
		player.yPos < obstacle.yPos + obstacle.height &&
		player.yPos + player.height > obstacle.yPos);
}


