#include <stdio.h>
#include "board.h"

// initialize the board with empty spaces
void initBoard(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}

// print the board with lines and numbers
void printBoard(char board[SIZE][SIZE]) {
    printf("   ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d   ", i);
    }
    printf("\n");

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", i);
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < SIZE - 1) {
            printf("  ");
            for (int j = 0; j < SIZE * 4 - 1; j++) {
                printf("-");
            }
            printf("\n");
        }
    }
}
