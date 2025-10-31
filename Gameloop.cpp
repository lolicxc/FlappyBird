#include "Gameloop.h"
#include "Player.h"
#include "Obstacles.h"
#include "raylib.h"

void InitGame()
{
	InitPlayer();
	InitObstacles();
}

void UpdateGame()
{	
	UpdatePlayer();
	UpdateObstacles();
}

void DrawGame()
{
	DrawPlayer();
	DrawObstacles();
	DrawText("Version 0.1", 1, 1, 20, RED);
	if (CheckCollision())
	{
		DrawText("Collision", 100, 100, 20, RED);
	}
}

bool CheckCollision()
{
	return (player.xPos < obstacle.xPos + obstacle.width &&
		player.xPos + player.width > obstacle.xPos &&
		player.yPos < obstacle.yPos + obstacle.height &&
		player.yPos + player.height > obstacle.yPos);
}


