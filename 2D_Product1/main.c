#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Arr_c[3][1]= {0};
    int Arr_a [3][2];
    printf("For second array Arr_a \n");

    for (int i=0 ; i<3 ; i++)
    {
        for (int j=0 ; j<2 ; j++)
        {
            printf("Please, Enter data you want of index [%d,%d]\n", i, j);
            scanf("%d", &Arr_a[i][j]);
        }
    }

    int Arr_b [2][1];
    printf("For second array Arr_a \n");

    for (int x=0 ; x<2 ; x++)
    {
        for (int y=0 ; y<1 ; y++)
        {
            printf("Please, Enter data you want of index [%d,%d]\n", x, y);
            scanf("%d", &Arr_b[x][y]);
        }
    }
    system("cls");

    printf("Final A array is: \n");
    for (int i=0 ; i<3 ; i++)
    {
        printf("\n");
        for (int j=0 ; j<2 ; j++)
        {
            printf("%d \t",Arr_a[i][j]);
        }
    }
    printf("Final B array is: \n");
    for (int x=0 ; x<2 ; x++)
    {
        printf("\n");
        for (int y=0 ; y<1 ; y++)
        {
            printf("%d \t",Arr_b[x][y]);
        }
    }

    for (int x=0 ; x<3 ; x++)
    {
        printf("\n");
        for (int y=0 ; y<2 ; y++)
        {
            Arr_c[x][0]+= Arr_a[x][y]*Arr_b[y][0];
        }
    }
    printf("Final C array is: \n");
    for (int x=0 ; x<3 ; x++)
    {
        printf("\n");
        for (int y=0 ; y<1 ; y++)
        {
            printf("%d \t",Arr_c[x][y]);
        }
    }


    return 0;
}
