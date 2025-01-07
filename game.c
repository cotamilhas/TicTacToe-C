#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "game.h"

// checks if a player won
int checkWin(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return 1;
    return 0;
}

// process a player's move (column, then row)
int makeMove(char board[SIZE][SIZE], char player) {
    int col, row;

    printf("Player %c, enter column and row: ", player);
    scanf("%d %d", &col, &row);

    // clear the console
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    if (col < 0 || col >= SIZE || row < 0 || row >= SIZE || board[row][col] != ' ') {
        printf("Invalid move. Try again.\n");
        return 0;
    }

    board[row][col] = player;
    return 1;
}
