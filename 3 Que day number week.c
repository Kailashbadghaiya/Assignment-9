#include<stdio.h>
#include<conio.h>
int main()
{
    int week;

    printf("Enter a week number (1-7)\n");
    scanf("%d",&week);

    switch(week)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2 :
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break ;
    case 6:
        printf("Suturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default :
        printf("Invalid days\n");
    }
    return 0;
}
