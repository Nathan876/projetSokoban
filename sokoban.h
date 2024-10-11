#ifndef sokoban_h
#define sokoban_h

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/* board.c*/
char ** init_board(void);
void display_board(char **board);

#endif /* sokoban_h */
