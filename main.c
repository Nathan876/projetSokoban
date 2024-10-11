#include "sokoban.h"


int main(int argc, const char * argv[]) {
    srand((unsigned int)time(NULL));
    char **board; // Création d'un tableau de tableau pour le plateau
    struct Points character = {((rand()%8)+1), ((rand()%8)+1)}; // Génération aléatoire des coordonnées de départ du personnage
    struct Points box = {((rand() % (7 - 2 + 1)) + 2), ((rand() % (7 - 2 + 1)) + 2)}; // Génération aléatoire des coordonnées de la boite
    struct Points target = {((rand() % (7 - 2 + 1)) + 2), ((rand() % (7 - 2 + 1)) + 2)}; // Génération aléatoire des coordonnées de la cible
    /* La boite et la cible ne peuvent pas être contre un mur */
    bool isPlaying = true; // Initialisation de la variable isPlaying pour la partie
    
    board = init_board(&character, &box, &target); // initialisation du plateau dans le tableau de tableau board grâce à la fonction init_board()

    while (isPlaying == true) { // Tant que isPlaying est vrai la partie continue
        printf("Joueur : %d %d\n", character.y, character.x); // Affiche les coordonnées du joueur
        printf("Boite : %d %d\n", box.y, box.x); // Affiche les coordonnées de la boite
        printf("Emplacement : %d %d\n", target.y, target.x); // Affiche les coordonnées où la boite doit être posée
        display_board(board); // Affiche le plateau grâce a la fonction display_board
        mouvement(board, &character, &box, &target); // La fonction mouvement permet de déplacer les items sur le plateau
        int check = verification(&character, &box, &target); // La fonction check stocke la valeur retournée par la fonction de vérification de victoire
        if (check == 0) { // Si check est égale à 0 alors la partie est perdu
            printf("C'est perdu");
            isPlaying = false;
        } else if (check == 1) { // Si check est égale à 1 alors la partie est gagnée
            printf("C'est gagné");
            isPlaying = false;
        }
    }
    display_board(board); // La fonction display_board affiche le plateau final de la partie
    
    for (int i = 0; i < 10; i++) {
        free(board[i]); // Libère l'espace mémoire alloué pour chaque tableau de tableau du plateau
    }
    free(board); // Libère l'espace mémoire alloué pour chaque tableau du plateau
    return 0;
}
