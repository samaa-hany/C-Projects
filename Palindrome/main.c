#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*int Palind (int s)
{
    int *arr;
    arr=malloc(s*sizeof(int));
    printf("Please, Enter the series you want to check.\n");
    for(int i=0 ; i<s ; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0 ; i<s/2 ; i++)
    {
        if (arr[i]==arr[s-1-i])
        {
            printf("The series is Palindrome. \n");
        }
        else
        {
            printf("Sorry!, The series is not Palindrome. \n");
        }
    }
    return arr[s];
}*/

bool Palinf_Rec(int arr[],int f, int l)
{
    if (f == l)
        return true;

    else if (arr[f] != arr[l])
        return false;

    else if (f < l + 1)
        return Palinf_Rec(arr, f+1, l-1);

    return true;
}

bool Palindrome(int arr[], int size)
{
    if (size == 0)
        return true;

    return Palinf_Rec(arr, 0, size-1);
}

int main()
{
    int arr[5];
    int size=5;
    printf("Please, Enter the series you want to check.\n");
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (Palindrome(arr, size))
        printf("Yes!, The series is Palindrome.");

    else
        printf("Sorry!, The series is not Palindrome.");

    return 0;
}

/* int size;
printf("Please, Enter the size of the series .\n");
scanf("%d", &size);
Palind(size);*/

