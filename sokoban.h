#ifndef sokoban_h
#define sokoban_h

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

struct Points {
    int x;
    int y;
};

/* board.c */
char ** init_board(struct Points character, struct Points box, struct Points target);
void display_board(char **board);

/* character.c */
char **mouvement(char **board, struct Points *coordinates, struct Points *box, struct Points *target);

/* verification.c */
int verification(struct Points *character, struct Points *box, struct Points *target);

#endif /* sokoban_h */
