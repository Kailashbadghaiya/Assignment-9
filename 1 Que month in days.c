#include<stdio.h>
#include<conio.h>
int main()
{
    int month ;

    printf("Enter a month number (1-12)\n");
    scanf("%d",&month);

    switch(month)
    {
    case 1 :
        printf("Janaury = 31 days\n");
        break ;
    case 2 :
        printf("Febuary = 28/29 days\n");
        break ;
    case 3 :
        printf(" March = 31 days\n");
        break ;
    case 4 :
        printf("April = 30 days\n");
        break;
    case 5 :
        printf("May = 31 days\n");
        break ;
    case 6 :
        printf("Jun = 30 days\n");
        break ;
    case 7 :
        printf("July = 31 days\n");
        break;
    case 8 :
        printf("August = 31 days\n");
        break ;
    case 9 :
        printf("September = 30 days\n");
        break;
    case 10 :
        printf("Octubar = 31 days\n");
        break;
    case 11 :
        printf("November = 30 days\n");
        break;
    case 12 :
        printf("December = 31 days\n");
        break;
    default :
        printf("Invalid days\n");
    }
    return 0;
}
