#include <stdio.h>
#include <stdlib.h>

char ** init_board(void) {
    char ** board;
    int i;
    int j;

    i = 0;
    board = malloc(10 * sizeof(*board));

    while(i < 10) {
        board[i] = malloc(10 * sizeof(char));
        j = 0;
        while(j < 10) {
            if (i == 0 || i == 9) {
                board[i][j] = '#';
            } else if (j == 0 || j == 9 ) {
                board[i][j] = '#';
            } else {
                board[i][j] = ' ';
            }
            j++;
        }
        i++;
    }
    return board;
}

void display_board(char **board) {
    int i;
    i = 0;
    printf("\n");
    while (i < 10) {
        printf("%c %c %c %c %c %c %c %c %c %c\n", board[i][0], board[i][1], board[i][2], board[i][3], board[i][4], board[i][5], board[i][6], board[i][7], board[i][8], board[i][9]);
        i++;
    }
    printf("\n");
}
