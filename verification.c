#include "sokoban.h"

int verification(struct Points *character, struct Points *box, struct Points *target){
    if (box->x == target->x && box->y == target-> y) {
        return 1;
    } else if (box->x == 1 && box->x == 1) {
        return 0;
    } else if (box->x == 8 && box->y == 1) {
        return 0;
    } else if (box->x == 8 && box->y == 8) {
        return 0;
    } else if (box->x == 1 && box->y == 8) {
        return 0;
    }
    return 2;
}
