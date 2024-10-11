#include "sokoban.h"

/* La fonction vérification prend en paramètre les coordonnées du personnage, de la boite et de la cible */
/* Le code renvoi 1 si la boite est sur la cible */
/* Si la boite est le long du mur le code renvoie 0.*/

int verification(struct Points *character, struct Points *box, struct Points *target){
    if (box->x == target->x && box->y == target-> y) {
        return 1;
    } else if (box->x == 1) {
        return 0;
    } else if (box->x == 8) {
        return 0;
    } else if ((box->x >= 2 && box->x <= 8) && box->y == 8) {
        return 0;
    } else if ((box->x >= 2 && box->x <= 8) && box->y == 1) {
        return 0;
    }
    return 2;
}

