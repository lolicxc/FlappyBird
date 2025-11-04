#include "Obstacles.h"
#include "raylib.h"

Obstacle obstacle;
void InitObstacles()
{
	obstacle.xPos = 400;
	obstacle.yPos = 100;
	obstacle.width = 80;
	obstacle.height = GetRandomValue(300, 400);
	obstacle.speed = 300.0f;

}

void UpdateObstacles()
{
	float deltaTime = GetFrameTime();
	obstacle.xPos -= obstacle.speed * deltaTime;
	if (obstacle.xPos + obstacle.width < 0)
	{
		obstacle.xPos = 800;
		obstacle.yPos = GetRandomValue(100, 300);
	}
}

void DrawObstacles()
{ 
	DrawRectangle(obstacle.xPos, obstacle.yPos, obstacle.width, obstacle.height, BLACK);
}




