#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr [10];
        printf("Please, Enter data you want\n");
    for (int i=0 ; i<10 ; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max= arr[0];
    int min= arr[0];

    for (int i=0 ; i<10 ; i++)
    {
        printf("The value of index %d is %d\n", i,arr[i]);
    }
    for (int i=0 ; i<10 ; i++)
    {
        if (arr[i]>max )
        {
            max = arr[i];
        }
        else if (arr[i]<min )
        {
            min = arr[i];
        }
    }
    printf("The maximum number is %d and minimum number is %d \n", max, min);

    return 0;
}
