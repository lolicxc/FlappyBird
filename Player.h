#pragma once

struct Player
{
	int xPos;
	int yPos;
	int width;
	int height;
	float speed;
	bool isAlive;
};
extern Player player;

void InitPlayer();
void UpdatePlayer();
void DrawPlayer();