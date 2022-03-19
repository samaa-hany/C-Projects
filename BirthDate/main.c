#include <stdio.h>
#include <stdlib.h>

int main()
{

    int year;
    int month;
    int day;
    int f_year;
    int f_month;
    int f_day;
    do
    {
        printf("Please, Enter year between 1970 and 2000\n");
        scanf("%d", &year);
        if (year < 1970 || year > 2021 )
        {
            printf("Error!, Please, Enter year between 1970 and 2000\n");
            scanf("%d", &year);
        }
    }
    while (year < 1970 || year > 2021);



    do
    {
        printf("Please, Enter a month\n");
        scanf("%d", &month);
        month;
        if (month>12)
        {
            printf("Wrong input!, Please, Enter right month\n");
            scanf("%d", &month);
        }
    }
    while (month>12);

    do
    {
        printf("Please, Enter a day\n");
        scanf("%d", &day);
        int i = month;
        if (i<13)
        {
            if (i==1 || i==3 || i==5 || i==7|| i==8|| i==10|| i==12 )
            {
                if (day<1 && day>31)
                {
                    printf("Please, Enter right day\n");
                    scanf("%d", &day);
                }
            }
        }
    }
    while(day>31);

    do
    {
        int i = month;
        if (i==4 || i==6 || i==9 || i==11 )
        {
            if (day<1 && day>30)
            {
                printf("Please, Enter right day\n");
                scanf("%d", &day);
            }
        }
    }
    while(day>30);

    do
    {
        if (month==2 && year%4!=0)
        {
            if (day<1 && day>28)
            {
                printf("Please, Enter right day\n");
                scanf("%d", &day);
            }
        }

        else if (year%4==0 && month==2 && day >29)    //leap year
        {
            if (day<1 && day>29)
            {
                printf("Please, Enter right day\n");
                scanf("%d", &day);
            }
        }
    }
    while(day>29);

    f_year=2021-year;
    f_month=11-month;
    f_day=10-day;
    if (f_month<1 && f_month!=0 )
    {
        f_year=f_year-1;
        f_month= 12+f_month;
    }
    else if (f_day<1 && f_month==0)
    {
        f_month=f_month-1;
        f_day= 30+f_day;
    }
    printf("You are %d,%d,%d  \n ",f_year, f_month, f_day );

    return 0;
}


