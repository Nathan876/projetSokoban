#include "sokoban.h"

int main(int argc, const char * argv[]) {
    char **board;
    struct Points character = {3, 4};
    struct Points box = {4, 4};
    struct Points target = {8, 7};
    bool isPlaying = true;
    
    board = init_board(character, box, target);
    
    while (isPlaying == true) {
        printf("Joueur : %d %d\n", character.y, character.x);
        printf("Boite : %d %d\n", box.y, box.x);
        printf("Emplacement : %d %d\n", target.y, target.x);
        display_board(board);
        mouvement(board, &character, &box, &target);
        int check = verification(&character, &box, &target);
        if (check == 0) {
            printf("C'est perdu");
            isPlaying = false;
        } else if (check == 1) {
            printf("C'est gagné");
            isPlaying = false;
        }
    }
    display_board(board);
    
    for (int i = 0; i < 10; i++) {
        free(board[i]);
    }
    free(board);
    return 0;
}
