#include <stdio.h>
#include <stdlib.h>
#include <gotoxy.h>

int main()
{
    int size;
    int col;
    int row;

    printf("Please, Enter odd size\n");
    scanf("%d",& size);

    col=1;
    row=1;

    if (size%2==0)
    {
        printf("Please, Enter odd size\n");

    }
    else if (size==1)
    {
        printf("Please, Enter odd size but not 1\n");
    }
    else
    {
        col=size/2+1;
    row=1;

    for(int i=1; i<=size*size; i++)
    {
        gotoxy(col*size+7,row*size+7);
        printf("%i",i);
        if (i%size!=0)
        {
            row--;
            col--;
            if (row<1)  row=size;
            if (col<1)  col=size;
        }
        else
        {
            row++;
            if (row>size)  row=1;
        }
    }
    }

    return 0;
}
