#include "stdio.h"
#include "stdlib.h"
#include "defs.h"

int main()
{
    AllInit();
    S_BOARD board[1];

    ParseFen(START_FEN, board);
    PrintBoard(board);
    
    return 0;
}