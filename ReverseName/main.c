/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr [20];
    char r_arr [20]= {0};
    char ch;
    int i =0;
    int j =0;
    printf("Please Enter your name: \n");

    while ((ch=getch())!=13)
    {
        arr[i]=ch;

        printf("%c",arr[i]);
        i++;
    }
    arr[i]='\0';
    printf("\n");
    printf("\n");
    printf("Your reverse name is: \n");
    for (j ; i>0 ; i--, j++)
    {
        r_arr[j]= arr[i-1];
        printf("%c",r_arr[j]);
    }
    printf("\n");

    return 0;
}*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[20];
    char ch;
    int x=0;
    printf("Please Enter Your Name \n");

    while ((ch=getch())!=13)
    {
        arr[x]=ch;

        printf("%c",arr[x]);
        x++;
    }
    arr[x]='\0';
    printf("\n");
    printf("\n");
    printf("your name is \n");

    while(x>0)
    {
        printf("%c",arr[x-1]);
        x--;
    }

    return 0;
}
