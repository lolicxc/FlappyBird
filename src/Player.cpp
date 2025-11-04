#include "Player.h"
#include "raylib.h"
#include "Gameloop.h"
#include "GameOverScreen.h"

Player player;
const float gravity = 800.0f;
const float jumpForce = -300.0f;

void InitPlayer()
{
	player.xPos = 100;
	player.yPos = 200;
	player.width = 50;
	player.height = 50;
	player.isAlive = false;
	player.velocityY = 200.0f;
}

void UpdatePlayer()
{
    float deltaTime = GetFrameTime();

    player.velocityY += gravity * deltaTime;
    player.yPos += player.velocityY * deltaTime;

    // salto
    if (IsKeyPressed(KEY_UP))
    {
        player.velocityY = jumpForce;  
    }

    if (player.yPos < 0)
    {
        player.yPos = 0;
    }

}

void DrawPlayer()
{
	DrawRectangle(player.xPos, player.yPos, player.width, player.height, RED);
}

bool CheckPlayerBounds()
{
    return player.yPos + player.height > GetScreenHeight();
}
