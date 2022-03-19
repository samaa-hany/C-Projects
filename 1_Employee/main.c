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
void PrintEmp (struct Employee e)
{
    printf("%d", e.id);
    printf("\n");
    printf("%s", e.name);
    printf("\n");
    printf("%d", e.age);
    printf("\n");
    printf("%f", e.salary);
    printf("\n");
    printf("%d", e.comm);
    printf("\n");
    printf("%d", e.de);
}
struct Employee e;
int main()
{
    gotoxy(10,10);
    printf(" Enter ID \n");
    gotoxy(20,10);
    scanf ("%d", &e.id);
    _flushall();
    gotoxy(10,12);
    printf(" Enter Name \n");
    gotoxy(22,12);
    scanf ("%s", &e.name);
    // gets(e.name);
    _flushall();
    gotoxy(40,10);
    printf(" Enter Age \n");
    gotoxy(55,10);
    scanf ("%d", &e.age);
    _flushall();
    gotoxy(40,12);
    printf(" Enter Salary \n");
    gotoxy(55,12);
    scanf ("%f", &e.salary);
    _flushall();
    gotoxy(10,14);
    printf(" Enter Commission \n");
    gotoxy(28,14);
    scanf ("%d", &e.comm);
    _flushall();
    gotoxy(40,14);
    printf(" Enter Deduction \n");
    gotoxy(60,14);
    scanf ("%d", &e.de);
    _flushall();
    printf("\n");
    printf("\n");
    float net = (e.salary + e.comm) - e.de;
    printf("My name is %s and my Net. Salary is %d",e.name, net);
    printf("\n");
    PrintEmp(e);
    return 0;
}
