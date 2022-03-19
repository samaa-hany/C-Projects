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
    int max_dis=0;
    int dis=0;
    for (int i=0 ; i<10 ; i++)
    {
        printf("The value of index %d is %d\n", i,arr[i]);
    }

    for (int i=0 ; i<10 ; i++)
    {
        for (int j=0 ; j<10 ; j++)
        {
            if (arr[i]==arr[j] )
            {
                dis = j-i;
                if (max_dis<dis)
                {
                    max_dis=dis-1;
                }
            }
        }
    }
     printf("\n");
    printf("The long distance between 2 repeated elements is: \n");
    printf("%d \n",max_dis);
    return 0;

}


//0if (max_dis<dis)
//         {
//                max_dis=dis;
//          }
