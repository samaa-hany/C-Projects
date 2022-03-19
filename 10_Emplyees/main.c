#include <stdio.h>
#include <stdlib.h>
#include <textattr.h>
#include <gotoxy.h>
#include <string.h>
#define Null -32
#define up 72
#define down 80
#define home 71
#define end 77
#define en 13
#define esc 27
#define tap 9
struct Employee
{
    int id;
    char name [10];
    int age;
    float salary;
    int comm;
    int de;
};
void PrintEmp(struct Employee emp[10])
{
    int netSalary;
    int i;
    for (i=0; i<10; i++)
    {
        if(emp[i].id != -123)
        {
            printf("Employee no. %d\n",i);
            printf("your ID is %d\n",emp[i].id);
            printf("your Name is ");
            puts(emp[i].name);
            printf("your Age is %d\n",emp[i].age);
            netSalary=emp[i].salary+emp[i].comm-emp[i].de;
            printf("your Salary is %f\n",emp[i].salary);
            printf("your commission is %f\n",emp[i].comm);
            printf("your Deduction is %f\n",emp[i].de);
            printf("your Net. salary is %f\n",netSalary);
        }
    }
}
struct Employee e;
struct Employee emp[10];

int main()
{
    char menu [8][20]= {"New","Display all","Display By ID","Display By Name","Delete all","Delete By ID","Delete By Name","Exit"};
    int flag =10;
    char ch;
    int cur=0;
    int i =0;
    char name[10];
    int id ;

    for (i = 0 ; i < 8 ; i++)
    {
        emp[i].id=-123;
    }
    do
    {
        system("cls");

        for(int i=0 ; i<8 ; i++)
        {
            if (i==cur)
            {
                textattr(1);
            }
            else
            {
                textattr(5);
            }
            gotoxy (30, 10+i*3);
            printf ("%s", menu[i]);
        }
        ch = getch();
        switch(ch)
        {
        case Null:
            ch= getch();
            switch (ch)
            {
            case down:
                cur++;
                if (cur>8)
                {
                    cur=0;
                }
                break;
            case up:
                cur--;
                if (cur<0)
                {
                    cur=8;
                }
                break;
            }
            break;

        case en:
            switch (cur)
            {
            case 0:
                do
                {
                    system("cls");
                    gotoxy(25,2);
                    printf("Please, Enter the index from 0 to 9. \n");
                    gotoxy(30,4);
                    scanf("%d", &i);
                    if((i> 9) || (i < 0))
                    {
                        printf("Invalid index. \n");
                        getch();
                    }
                    gotoxy(25,6);
                    printf("Employee no. %d \n", i);
                    gotoxy(10,10);
                    printf(" ID:  \n");
                    gotoxy(10,12);
                    printf(" Name: \n");
                    gotoxy(40,10);
                    printf(" Age: \n");
                    gotoxy(40,12);
                    printf(" Salary: \n");
                    gotoxy(10,14);
                    printf(" Commission: \n");
                    gotoxy(40,14);
                    printf(" Deduction: \n");
                    gotoxy(20,10);
                    scanf ("%d", &emp[i].id);
                    _flushall();
                    gotoxy(22,12);
                    scanf ("%s", &emp[i].name);
                    _flushall();
                    gotoxy(55,10);
                    scanf ("%d", &emp[i].age);
                    while(emp[i].age<18 || emp[i].age>60)
                    {
                        printf("wrong age limit [18~60]");
                        scanf("%d",&emp[i].age);
                    }
                    _flushall();
                    gotoxy(55,12);
                    scanf ("%f", &emp[i].salary);
                    _flushall();
                    gotoxy(28,14);
                    scanf ("%d", &emp[i].comm);
                    _flushall();
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
                getch();
                break;
            case 1:
                system("cls");
                PrintEmp(emp);
                getch();
                break;
            case 2:
                system("cls");
                printf("Enter the ID of the employee you want \n");
                _flushall();
                scanf("%d",&id);
                for (i=0 ; i<10 ; i++)
                {
                    if (emp[i].id ==id)
                    {
                        printf("The employee's data are: \n");
                        printf("ID: %d", emp[i].id);
                        printf("\n");
                        printf("Name: %s", emp[i].name);
                        printf("\n");
                        printf("Age: %d", emp[i].age);
                        printf("\n");
                        printf("Salary: %f", emp[i].salary);
                        printf("\n");
                        printf("Commission: %d", emp[i].comm);
                        printf("\n");
                        printf("Deduction: %d", emp[i].de);
                    }
                }
                getch();
                break;
            case 3:

                    system("cls");
                    printf("Enter the Name of the employee you want \n");
                    _flushall();
                    scanf("%s", &name);
                    for (i=0;i<10;i++)
                            {
                    if ((strcmp( emp[i].name,name))==0)
                    {
                       printf("The employee's data are: \n");
                        printf("ID: %d", emp[i].id);
                        printf("\n");
                        printf("Name: %s", emp[i].name);
                        printf("\n");
                        printf("Age: %d", emp[i].age);
                        printf("\n");
                        printf("Salary: %f", emp[i].salary);
                        printf("\n");
                        printf("Commission: %d", emp[i].comm);
                        printf("\n");
                        printf("Deduction: %d", emp[i].de);
                    }
                            }
                    getch();
                break;
            case 4:
                system("cls");
                for(i=0 ; i<6 ; i++)
                {
                    emp[i].id=0;
                    strcpy(emp[i].name, "  ");
                    emp[i].salary=0;
                    emp[i].comm=0;
                    emp[i].de=0;
                }
                printf("Done \n");
                getch();
                break;
            case 5:
                do
                {
                    system("cls");
                    printf("Enter the ID of the employee you want to remove.\n");
                    _flushall();
                    scanf("%d",&id);
                    for (i=0; i<10; i++)
                    {
                        if(emp[i].id == id)
                        {
                            emp[i].id=0;
                            strcpy(emp[i].name,"  ");
                            emp[i].age=0;
                            emp[i].salary =0;
                            emp[i].comm=0;
                            emp[i].de=0;
                            printf("Do you want to continue?, y or n!\n");
                            ch=getch();
                        }
                    }
                }
                while(ch=='y');
                break;
            case 6:
                do
                {
                    system("cls");
                    printf("Enter the Name of the employee you want to remove.\n");
                    _flushall();
                    scanf("%d",&name);
                    for (i=0; i<10; i++)
                    {
                        if(emp[i].id == name)
                        {
                            emp[i].id=0;
                            strcpy(emp[i].name,"  ");
                            emp[i].age=0;
                            emp[i].salary =0;
                            emp[i].comm=0;
                            emp[i].de=0;
                            printf("Do you want to continue?, y or n!\n");
                            ch=getch();
                        }
                    }
                }
                while(ch=='y');
                break;
            case 7:
                flag=0;
                break;
            }
            break;
        }
    }
    while (flag==10);

    return 0;
}
