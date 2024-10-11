#ifndef sokoban_h
#define sokoban_h

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/* board.c*/
char ** init_board(void);
void display_board(char **board);

/* character.c*/
char **mouvement(char **board, int x, int y);

#endif /* sokoban_h */
