#include "game.h"
#include <bitset>

void game::game(int sizeforx, int sizefory, bitset<56> newBoard[2]) {
    sizeX = sizeforx;
    sizeY = sizefory;
    board = newBoard;
}

void game::printBoard() {
    
}
