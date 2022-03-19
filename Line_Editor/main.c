#include <stdio.h>
#include <stdlib.h>
#include <gotoxy.h>
#include <textattr.h>
#define Null -32
#define Home 71
#define End 79
#define R_arrow 77
#define L_arrow 75
#define Ent 13
#define Esc 27
#define Back_space 8

int main()
{
    char arr[30]= {0};
    int cur, ft,lt;
    cur = ft =lt =10;
    char *ptr_cur, *ptr_f, *ptr_l;
    ptr_cur= ptr_f = ptr_l = arr;
    char ch;
    int i=0;
    int flag=1;

    for (i=0 ; i<30 ; i++)
    {
        textattr(343);
        gotoxy(10+i,10);
        printf("  ");
    }

    do
    {
        gotoxy(cur, 10);
        ch = getch ();
        switch (ch)
        {
        case Null:
            ch = getch ();
            switch (ch)
            {
            case R_arrow:
                if (cur < lt)
                {
                    cur++;
                    ptr_cur++;
                }
                break;
            case L_arrow:
                if (cur > ft)
                {
                    cur--;
                    ptr_cur--;
                }
                break;
            case Home:
                cur=ft;
                ptr_cur=ptr_f;
                break;
            case End:
                cur=lt;
                ptr_cur=ptr_l;
                break;
            }
            break;

        case Esc:
        case Ent:
            textattr(7);
            system("cls");
            puts(arr);
            getch();
            flag=0;
            break;
        case Back_space:

            if (cur==lt)
            {
                *ptr_cur=0;
                ch='  ';
                printf("%c", ch);
                cur--;
                ptr_cur--;
                lt--;
                ptr_l--;
                /*  if (ch == Ent)
                {
                  for(i=0 ; i< cur ; i++)
                  {
                      textattr(7);
                      system("cls");
                      puts(arr[i]);
                      getch();
                      flag=0;
                  }
                }*/
            }

            else //if (ptr_cur<ptr_l)
            {
                //*ptr_cur=*(ptr_cur+1);
                //*ptr_cur=0;
                ch='  ';
                printf("%c", ch);
                // printf("%c",*ptr_cur );

                for (i=0 ; i<(lt) ; i++)
                {
                    *ptr_cur=*(ptr_cur+1);
                    ch = *ptr_cur;
                    gotoxy(cur,10);
                    printf("%c",*ptr_cur);
                    //gets(ptr_l);
                    ptr_cur++;
                    cur++;
                    lt--;
                    ptr_l--;
                }

                /*cur--;
                ptr_cur--;
                puts(ptr_cur);*/
            }

            break;
        default:
            if (isprint(ch))
            {
                if (ptr_cur<ptr_f+30)
                {
                    if (ptr_cur == ptr_l)
                    {
                        *ptr_cur=ch;
                        printf("%c", ch);
                        cur++;
                        ptr_cur++;
                        lt++;
                        ptr_l++;
                    }
                    else
                    {
                        *ptr_cur=ch;
                        printf("%c", ch);
                        cur++;
                        ptr_cur++;
                    }
                }
            }
        }
    }
    while (flag == 1);
    return 0;
}
