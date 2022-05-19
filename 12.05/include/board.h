#ifndef BOARD_H
#define BOARD_H


class board
{
    public:
        board(int b_size);
        virtual ~board();
        void Reset();
        void Display();
        void Set_position
    private:
        int board_size;

};

#endif // BOARD_H
