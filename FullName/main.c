#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fname [10];
    char lname [10];
    char fullname [20];
    printf("Please Enter your first name \n");
    gets(fname);
    printf("Please Enter your second name \n");
    gets(lname);

    strcpy(fullname,fname);
    strcat (fullname," ");
    strcat (fullname,lname);

    printf("Your full name is : \n");
    puts(fullname);
    return 0;
}
