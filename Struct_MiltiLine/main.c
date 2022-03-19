#include <stdio.h>
#include <stdlib.h>
#include <gotoxy.h>
#include <textattr.h>
#include <string.h>
#include <conio.h>

#define Null -32
#define home 71
#define end 79
#define right 77
#define left 75
#define up 72
#define down 80
#define enter 13
#define esc 27
#define backspace 8
struct Employee
{
    int id;
    char *name;
    int age;
    float salary;
    int comm;
    int de;
} e ;

char** LineEditor(int size,int* row,int column,int fkey,int lkey)
{
    int count=0;
    int counter=column;
    char** arr=malloc(6*sizeof(char*));
    for(int i=0; i<6; i++)
    {
        *(arr+i)=malloc(size*sizeof(char));
    }
    int current,first,last;
    char* pcurrent[6],*plast[6],*pfirst[6];
    current=first=last=row[count];
    pcurrent[count]=pfirst[count]=plast[count]=*arr;
    int flag=10;
    char ch;
    do
    {
        textattr(13);
        gotoxy(current,counter);
        _flushall();
        ch=getch();
        if(isprint(ch) && ch>=fkey && ch<=lkey)
        {
            if(current<first+(size-1))

            {

                if(current==last)
                {
                    *pcurrent[count]=ch;
                    printf("%c",ch);
                    current++;
                    (pcurrent[count])++;
                    last++;
                }
                else
                {
                    *pcurrent[count]=ch;
                    printf("%c",ch);
                    current++;
                    (pcurrent[count])++;
                }
            }
            else
            {
                // printf("\n%d",pcurrent-arr);
                last=row+size;
                *pcurrent[count]=ch;
                printf("%c",ch);
            }
        }
        else
        {
            if(ch==Null)
            {
                ch=getch();
                switch(ch)
                {
                case right:
                    if(current<last)
                    {
                        current++;
                        (pcurrent[count])++;
                    }
                    break;
                case left:
                    if(current>first)
                    {

                        current--;
                        (pcurrent[count])--;
                    }
                    break;
                case up:
                    arr[count][last-row[count]]='\0';
                    counter-=2;
                    if(counter<column)
                    {
                        counter=column+10;
                    }
                    count--;
                    if(count<0)
                    {
                        count=5;
                    }
                    current=first=row[count];
                    int i=0;
                    while(arr[count][i]!=0)
                    {
                        i++;
                    }
                    //printf("\n%d",i);
                    last=first+i;
                    pcurrent[count]=*(arr+count);
                    break;
                case down:
                    arr[count][last-row[count]]='\0';
                    counter+=2;
                    if(counter>column+10)
                    {
                        counter=column;
                    }
                    count++;
                    if(count>5)
                    {
                        count=0;
                    }
                    current=first=row[count];
                    int k=0;
                    while(arr[count][k]!=0)
                    {
                        k++;
                    }
                    //printf("\n%d",k);
                    last=first+k;
                    pcurrent[count]=*(arr+count);
                    break;
                case home:
                    current=first;
                    break;
                case end:
                    current=last;
                    break;
                }
            }
            else
            {
                switch(ch)
                {
                case enter:
                    arr[count][last-row[count]]='\0';
                    counter+=2;
                    if(counter>column+10)
                    {
                        counter=column;
                    }
                    count++;
                    if(count>5)
                    {
                        count=0;
                    }
                    current=first=row[count];
                    int k=0;
                    while(arr[count][k]!=0)
                    {
                        k++;
                    }
                    last=first+k;
                    pcurrent[count]=*(arr+count);
                    break;
                case esc:
                    system("cls");
                    flag=0;
                    break;
                case backspace:
                    if(current==last && current>first)
                    {
                        current--;
                        (pcurrent[count])--;
                        last--;
                        //plast--;
                        *pcurrent[count]='\0';
                        gotoxy(row[count],counter);
                        printf("%s","                                                                  ");
                        textattr(7);
                        // getInfo();
                        gotoxy(row[count],counter);
                        textattr(13);
                        printf("%s",*(arr+count));
                    }
                    else
                    {
                        if(current>first)
                        {
                            current--;
                            (pcurrent[count])--;
                            last--;
                            //plast--;
                            int x=0;
                            for(int i=current; i<last; i++)
                            {
                                *(pcurrent[count]+x)=*(pcurrent[count]+1+x);
                                x++;
                            }
                            *(pcurrent[count]+x)='\0';
                            printf("%s","                                                                  ");
                            textattr(7);
                            textattr(13);
                            gotoxy(row[count],counter);
                            printf("%s",*(arr+count));

                        }

                    }
                }
            }
        }
    }

    while(flag==10);
    return arr;
}

int main()
{
    /*char arr[6][30]= {"Id:","Age:","Name:","Salary:","Commission:","Deduction:"};

    for(int i=0; i<6; i++)
    {
        gotoxy(10,10+i*2);
        printf("%s",arr[i]);
    }
     gotoxy(10,10);
    printf("ID: \n");
    gotoxy(10,12);
    printf("Name: \n");
     gotoxy(10,14);
    printf("Age: \n");
     gotoxy(10,16);
    printf("Salary: \n");
     gotoxy(10,18);
    printf("Commission: \n");
    gotoxy(10,20);
    printf("Deduction: \n");
    int row[6]= {14,15,16,18,21,20};
    char** Arr=LineEditor(30,row,10,44,122);
    e.id=atoi(LineEditor(30,14,10,44,89));
    _flushall();
    e.name=LineEditor(30,15,10,60,122);
    _flushall();
    do
    {
        e.age=atoi(LineEditor(30,16,10,44,89));
    }
    while(e.age<18 || e.age>60);
    _flushall();
    e.salary=atof(LineEditor(30,18,10,44,89));
    _flushall();
    e.comm=atoi(LineEditor(30,21,10,44,89));
    _flushall();
    e.de=atoi(LineEditor(30,20,10,44,89));*/

    int c;
    c = check(10, 20);
    printf("c=%d\n", c);
    return 0;
}
int check(int i, int j)
{
    int *p, *q;
    p=&i;
    q=&j;
    i>=45 ? return(*p): return(*q);
}
