#include "Obstacles.h"
#include "raylib.h"

Obstacle obstacle;

void InitObstacles()
{
	obstacle.xPos = 400;
	obstacle.height = GetRandomValue(100,250);
	obstacle.yPos = GetScreenHeight() - obstacle.height;
	obstacle.width = 80;
	obstacle.speed = 300.0f;
	obstacle.space = 200;

}

void UpdateObstacles()
{
	float deltaTime = GetFrameTime();
	obstacle.xPos -= obstacle.speed * deltaTime;
	if (obstacle.xPos + obstacle.width < 0)
	{
		obstacle.xPos = 800;
		obstacle.height = GetRandomValue(100, 250);
		obstacle.yPos = GetScreenHeight() - obstacle.height; 
	}
}

void DrawObstacles()
{ 
	DrawRectangle(obstacle.xPos, obstacle.yPos, obstacle.width, obstacle.height, BLACK);

	float topHeight = GetScreenHeight() - obstacle.height - obstacle.space;
	DrawRectangle(obstacle.xPos, 0, obstacle.width, topHeight, BLACK);
}




