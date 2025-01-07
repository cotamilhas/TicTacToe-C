#include <stdio.h>
#include "board.h"
#include "game.h"

int main() {
    char board[SIZE][SIZE];
    initBoard(board);

    char currentPlayer = 'X';
    int moves = 0;

    while (1) {
        printBoard(board);

        if (!makeMove(board, currentPlayer)) {
            continue;
        }

        moves++;

        if (checkWin(board)) {
            printBoard(board);
            printf("Player %c wins!\n", currentPlayer);
            break;
        }

        if (moves == SIZE * SIZE) {
            printBoard(board);
            printf("It's a draw!\n");
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
