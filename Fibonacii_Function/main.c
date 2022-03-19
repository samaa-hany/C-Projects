#include <stdio.h>
#include <stdlib.h>

int Fib (int s)
{
    int *arr;
    arr=malloc(s*sizeof(int));
    arr[0]=0;
    arr[1]=1;
    printf("%d ", arr[0]);
    printf("%d", arr[1]);
    for(int i=2 ; i<s ; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        printf(" %d ",arr[i]);
    }
    return arr[s];
}

int main()
{
    int size;
    printf("Please, Enter the length of Fibonacii series.\n \n");
    scanf("%d", &size);
    int res = Fib(size);
    printf("\n");

    return 0;
}
