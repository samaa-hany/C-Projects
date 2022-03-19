#include <stdio.h>
#include <stdlib.h>
#include <gotoxy.h>
#include <textattr.h>

struct Employee
{
    int id;
    char name [10];
    int age;
    float salary;
    int comm;
    int de;
};
void PrintEmp (struct Employee emp[10])
{
    int i=0;
    printf("%d", emp[i].id);
    printf("\n");
    printf("%s", emp[i].name);
    printf("\n");
    printf("%d", emp[i].age);
    printf("\n");
    printf("%f", emp[i].salary);
    printf("\n");
    printf("%d", emp[i].comm);
    printf("\n");
    printf("%d", emp[i].de);
}
struct Employee emp[10];

int main()
{
    char ch;
    int i;

    do
    {
        system("cls");
        gotoxy(25,2);
        printf("Please, Enter your order \n");
        gotoxy(30,4);
        scanf("%d", &i);
        gotoxy(25,6);
        printf("Employee no. %d \n", i);
        gotoxy(10,10);
        printf(" ID:  \n");
        gotoxy(20,10);
        scanf ("%d", &emp[i].id);
        _flushall();
        gotoxy(10,12);
        printf(" Name: \n");
        gotoxy(22,12);
        scanf ("%s", &emp[i].name);
        _flushall();
        gotoxy(40,10);
        printf(" Age: \n");
        gotoxy(55,10);
        scanf ("%d", &emp[i].age);
        _flushall();
        gotoxy(40,12);
        printf(" Salary: \n");
        gotoxy(55,12);
        scanf ("%f", &emp[i].salary);
        _flushall();
        gotoxy(10,14);
        printf(" Commission: \n");
        gotoxy(28,14);
        scanf ("%d", &emp[i].comm);
        _flushall();
        gotoxy(40,14);
        printf(" Deduction: \n");
        gotoxy(60,14);
        scanf ("%d", &emp[i].de);
        _flushall();
        printf("\n");
        printf("\n");
        float net = (emp[i].salary + emp[i].comm) - emp[i].de;

        printf("Do you want to continue?, y or n! \n");
        ch = getch();
    }
    while (ch == 'y');

   printf("Enter the index \n");
    for(int j=0 ; j<3 ; j++)
    {
        scanf("%d", &i);
        if ( i == j)
        {
            system("cls");
        float net = emp[i].salary + emp[i].comm - emp[i].de;
        printf("The name is %s \n",emp[i].name );
        printf(" The Net. Salary is %f \n", net);
        printf("\n");
        }
    }

    return 0;
}
