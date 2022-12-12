#include<stdio.h>
#include<conio.h>
int main()
{
    int num ;

    printf("Enter a integer number\n");
    scanf("%d",&num);

    switch(num%2==0)
    {
    case 1 :
        printf("number is even %d\n",num);
        break ;
    case 0 :
        switch(num%2==1)
        {
        case 1 :
            printf("number is convert even number %d\n",num+1);
            break;
        case 0 :
            printf("Invalid number\n");
            break;
        }
        break;
    }
    return 0;
}
