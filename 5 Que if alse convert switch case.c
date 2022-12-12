#include<stdio.h>
#include<conio.h>
int main()
{
    int var ;

    printf("Enter a number\n");
    scanf("%d",&var);

    while(1)
    {
        switch(var)
        {
        case 1 :
            printf("good\n");
            break;
        case 2 :
            printf("better\n");
            break;
        case 3 :
            printf("best\n");
            break;
        default :
            printf("Invalid\n");
        }
        return 0;
    }
}

