#pragma once

struct Player
{
	int xPos;
	int yPos;
	int width;
	int height;
	bool isAlive;
	float velocityY;
};

extern Player player;

void InitPlayer();
void UpdatePlayer();
void DrawPlayer();
bool CheckPlayerBounds();