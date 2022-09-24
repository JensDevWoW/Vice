#include "stdio.h"
#include "stdlib.h"
#include "defs.h"

void PrintBin(int move) 
{
    int index = 0;
    printf("AS binary:\n");
    for(index = 27; index >= 0; index--)
    {
        if((1<<index)&move) printf("1");
        else printf("0");
        if(index!=28&&index%4==0) printf(" ");
    }
    printf("\n");
}

int main()
{
    AllInit();
    S_BOARD board[1];

    ParseFen(START_FEN, board);
    PrintBoard(board);

    return 0;
}