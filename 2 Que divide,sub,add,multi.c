#include<stdio.h>
#include<conio.h>
int main()
{
    int choice,x,y,z ;

    while(1)
    {
        printf("1.addition\n");
        printf("2.subtract\n");
        printf("3.multiplication\n");
        printf("4.divide\n");

        scanf("%d",&choice);

        switch(choice)
        {
        case 1 :
            printf("Enter a 2 number\n");
            scanf("%d%d",&x,&y);
            z=x+y;
            printf("addition = %d\n",z);
            break;
        case 2 :
            printf("Enter a 2 number\n");
            scanf("%d%d",&x,&y);
            z=x-y;
            printf("subtraction = %d",z);
            break;
        case 3 :
            printf("Enter a 2 number\n");
            scanf("%d%d",&x,&y);
            z=x*y;
            printf("multiplication = %d\n",z);
            break;
        case 4 :
            printf("Enter a 2 number\n");
            scanf("%d%d",&x,&y);
            z=x/y;
            printf("divide = %d\n",z);
            break;
        case 5 :
            return 0;
            break;
        }
        return 0;
    }
}
