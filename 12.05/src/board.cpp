#include "board.h"

board::board(int b_size) : board_size{board_size}
{
    this->board_size = b_size;
}

board::Get_size()
{
    return board_size;
}

board::~board()
{
    //dtor
}
