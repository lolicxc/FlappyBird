#pragma once

struct Obstacle
{
	int xPos;
	int yPos;
	int width;
	int height;
	float speed;
	int space;
};

extern Obstacle obstacle;

void InitObstacles();
void UpdateObstacles();
void DrawObstacles();
