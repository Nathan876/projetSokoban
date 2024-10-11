#include "sokoban.h"

char **mouvement(char **board, struct Points *coordinates, struct Points *box, struct Points *target) {
    char coup;
    printf("Choisissez un mouvement : haut(w) bas(s) gauche(a) droite(d)\n");
    scanf(" %c", &coup);
    
    int new_x = coordinates->x;
    int new_y = coordinates->y;
    
    if (coup == 'w') {
        new_x--;
    } else if (coup == 's') {
        new_x++;
    } else if (coup == 'a') {
        new_y--;
    } else if (coup == 'd') {
        new_y++;
    } else {
        return board;
    }
    if (new_x == box->x && new_y == box->y) {
        int new_box_x = box->x + (new_x - coordinates->x);
        int new_box_y = box->y + (new_y - coordinates->y);
        
        if (board[new_box_x][new_box_y] == ' ' || (new_box_x == target->x && new_box_y == target->y)) {
            board[box->x][box->y] = ' ';
            box->x = new_box_x;
            box->y = new_box_y;
            board[box->x][box->y] = 'X';
        } else {
            return board;
        }
    }
    
    if (board[new_x][new_y] == ' ' || (new_x == target->x && new_y == target->y)) {
        board[coordinates->x][coordinates->y] = ' ';
        coordinates->x = new_x;
        coordinates->y = new_y;
        board[coordinates->x][coordinates->y] = 'O';
    }
    return board;
}
