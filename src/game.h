#include <bitset>

class game
{
private:
    /* data */

public:
    void game::game(int sizeforx, int sizefory, bitset<56> board[2]);
    void game::printBoard();

    int sizeX = 7;
    int sizeY = 6;
    bitset<56> board[2] = {bitset<56>(0), bitset<56>(0)}; 
};
