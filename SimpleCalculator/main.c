#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    char op;
    char c;
    int cal =1;
    while(cal)
    {
        printf("Please, Enter 1st number\n");
        scanf("%f", &num1);
        printf("Please, Enter 2nd number\n");
        scanf("%f", &num2);
        _flushall();
        printf("Please, Enter the operation\n");
        scanf("%c", &op);
        _flushall();
        switch (op)
        {
        case '+':
            printf("%f",num1+num2);
            break;
        case '-':
            printf("%f", num1-num2);
            break;
        case '*':
            printf("%f", num1*num2);
            break;
        case '/':
            printf("%f", num1/num2);
            if (num2==0)
            {
                printf("Invalid!, Please, Enter another number\n");
                 scanf("%f", &num2);
            }
            break;
        }
        printf("Please, Enter yes if you want to continue\n");
        scanf("%c", &c);
        if (c=='y')
        {
            cal=1;
        }
       else if (c=='n')
        {
            cal=0;
        }
    }


    return 0;
}
