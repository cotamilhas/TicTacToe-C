#pragma once

#define GAME_H

#include "board.h"

int checkWin(char board[SIZE][SIZE]);
int makeMove(char board[SIZE][SIZE], char player);

