#include "sokoban.h"


int main(int argc, const char * argv[]) {
    char **board;
    board = init_board();
    display_board(board);
    
    
    free(board);
    return 0;
}
