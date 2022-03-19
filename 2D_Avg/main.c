#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr [3][4];
    printf("Please, Enter all values you need in the array\n");
    for (int i=0 ; i<3 ; i++)
    {
        for (int j=0 ; j<4 ; j++)
        {
            printf("Please, Enter data you want of index [%d,%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    system("cls");
    printf("Final array is: \n");
    float sum[4]= {0};
    float avg[4]= {0};
    for (int i=0 ; i<3 ; i++)
    {
        printf("\n");
        for (int j=0 ; j<4 ; j++)
        {
            printf("%d \t",arr[i][j]);
        }
    }

    for (int i=0 ; i<4 ; i++)
    {
        for (int j=0 ; j<3 ; j++)
        {
            sum[i]+=arr[j][i];
        }
        avg[i]=sum[i]/3;

    }

    for (int i=0 ; i<4 ; i++)
    {
         printf("\n");
        printf(" %f \t", avg[i]);
    }

    return 0;
}
