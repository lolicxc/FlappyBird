#include "Player.h"
#include "raylib.h"

Player player;

void InitPlayer()
{
	player.xPos = 100;
	player.yPos = 200;
	player.width = 50;
	player.height = 50;
	player.speed = 200.0f;
	player.isAlive = false;
}

void UpdatePlayer()
{
	float deltaTime = GetFrameTime();
	if (IsKeyDown(KEY_UP))
	{
		player.yPos -= player.speed * deltaTime;
	}
	else if (IsKeyDown(KEY_DOWN))
	{

		player.yPos += player.speed * deltaTime;
	}
}

void DrawPlayer()
{
	DrawRectangle(player.xPos, player.yPos, player.width, player.height, RED);
}
