#pragma once

struct Obstacle
{
	int xPos;
	int yPos;
	int width;
	int height;
	float speed;
};

extern Obstacle obstacle;

void InitObstacles();
void UpdateObstacles();
void DrawObstacles();
