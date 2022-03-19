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
    int m;
    for (int i=0 ; i<10 ; i++)
    {
        printf("The value of index %d is %d\n", i,arr[i]);
    }

    for (int i=0 ; i<10 ; i++)
    {
        for (int j=0 ; j<10 ; j++)
        {
            if (arr[i]<arr[j] )
            {
                m = arr[i];
                arr[i]=arr[j];
                arr[j]=m;
            }
        }
    }
    for (int i=0 ; i<10 ; i++)
    {
        printf("%d \t",arr[i]);
    }
    return 0;
}
