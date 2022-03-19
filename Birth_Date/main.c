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
        if (year < 1970 || year > 2020 )
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
        if ( month<13)
        {
            if (month==1 || month==3 || month==5 || month==7|| month==8|| month==10|| month==12 )
            {
                if (day<1 && day>31)
                {
                    printf("Please, Enter right day\n");
                    scanf("%d", &day);
                }
            }
            if (month==4 || month==6 || month==9 || month==11 )
            {
                if (day<1 && day>30)
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
        switch(month)
        {
        case 2:
            if (year%4!=0 && day>28)
            {
                printf("Please, Enter right day\n");
                scanf("%d", &day);
            }
            else if (year%4==0 && day >29)    //leap year
            {
                printf("Please, Enter right day\n");
                scanf("%d", &day);

            }
            break;
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
    if (f_day<1 && f_month==0)
    {
        f_month=f_month-1;
        f_day= 30+f_day;
    }
    if (f_day<1)
        f_day= 30+f_day;

    printf("You are %d,%d,%d  \n ",f_year, f_month, f_day );

    return 0;
}
