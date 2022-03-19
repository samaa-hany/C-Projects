#include <stdio.h>
#include <stdlib.h>
#include <textattr.h>
#include <gotoxy.h>
#define Null -32
#define up 72
#define down 80
#define home 71
#define end 77
#define en 13
#define esc 27
#define tap 9
int main()
{
    char menu [4][10]= {"File", "New", "Display", "Exit"};
    int flag = 10;
    char ch;
    int cur=0;

    do
    {
        system("cls");
        for(int i=0 ; i<4 ; i++)
        {
            if (i==cur)
            {
                textattr(1);
            }
            else
            {
                textattr(5);
            }
            gotoxy (15, 15+i*2);
            printf ("%s", menu[i]);
        }
        ch= getch();
        switch (ch)
        {
        case Null:
            ch= getch();
            switch (ch)
            {
            case down:
                cur++;
                if (cur>3)
                {
                    cur=0;
                }
                break;
            case up:
                cur--;
                if (cur<0)
                {
                    cur=3;
                }
                break;
            case home:
                cur=0;
                break;
            case end:
                cur=3;
                break;
            }
            break;

        case esc:
            flag=0;
            break;
        case tap:
            cur++;
            if (cur>3)
            {
                cur=0;
            }
            break;
        case en:
            switch (cur)
            {
            case 0:
                system("cls");
                printf("File page \n");
                getch();
                break;
            case 1:
                system("cls");
                printf("Name page \n");
                getch();
                break;
            case 2:
                system("cls");
                printf("Display page \n");
                getch();
                break;
            case 3:
                flag=0;
                break;
            }
            break;
        }
    }
    while (flag==10);

    return 0;
}
