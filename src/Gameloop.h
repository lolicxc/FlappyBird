#pragma once

enum GameState
{
	MENU,
	PLAYING,
	CREDITS,
	GAME_OVER,
	EXIT
};

extern GameState currentState;

void InitGame();
void UpdateGame();
void DrawGame();
bool CheckCollision();
