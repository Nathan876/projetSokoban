#include "sokoban.h"

char ** init_board(struct Points *character, struct Points *box, struct Points *target) {
    char ** board;
    int i;
    int j;

    i = 0;
    board = malloc(10 * sizeof(*board)); // Allocation de la mémoire pour un tableau de 10 éléments

    while(i < 10) {
        board[i] = malloc(10 * sizeof(char)); // Allocation de la mémoire pour créer un sous tableau dans chaque élément du tableau board
        j = 0;
        while(j < 10) {
            if (i == 0 || i == 9) { // Création des murs
                board[i][j] = '#';
            } else if (j == 0 || j == 9 ) { // Création des murs
                board[i][j] = '#';
            } else if (i == character->x && j == character->y) { // Affichage du personnage
                board[i][j] = 'O';
            } else if (i == box->x && j == box->y) { // Affichage de la boite
                board[i][j] = 'X';
            } else if (i == target->x && j == target->y) { // Affichage de la cible
                board[i][j] = '.';
            } else {
                board[i][j] = ' '; // Les autres cases sont vides
            }
            j++;
        }
        i++;
    }
    return board; // Retourne le tableau de tableau complété avec les différents éléments
}

void display_board(char **board) { // La fonction display_board permet l'affichage du plateau
    int i;
    i = 0;
    printf("\n");
    while (i < 10) { // Création d'une boucle qui permet d'afficher tout les éléments de chaque élément du tableau
        printf("%c %c %c %c %c %c %c %c %c %c\n", board[i][0], board[i][1], board[i][2], board[i][3], board[i][4], board[i][5], board[i][6], board[i][7], board[i][8], board[i][9]);
        i++;
    }
    printf("\n");
}




