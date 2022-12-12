#include<stdio.h>
#include<conio.h>
int main()
{
    int choice,a,b,c ;

    while(1)
    {
        printf("1.isosceles triangle yes or no\n");
        printf("2.right angle triangle yes or no\n");
        printf("3.equilateral triangle yes or no\n");
        printf("4.Exit\n");

        scanf("%d",&choice);

        switch(choice)
        {
        case 1 :
            printf("Enter a 3 number\n");
            scanf("%d%d%d",&a,&b,&c);

            if(a==b || b==c || c==a)
                printf("yes,it is isosceles triangle");
            else
                printf("no,it is isosceles tringle");
            break;
        case 2 :
            printf("Enter a 3 number\n");
            scanf("%d%d%d",&a,&b,&c);

            if(a*a+b*b==c*c || b*b+c+c==a*a || c*c+a*a==b*b)
                printf("yes,right angle triangle");
            else
                printf("no,right angle triangle");
            break;
        case 3 :
            printf("Enter a 3 number\n");
            scanf("%d%d%d",&a,&b,&c);

            if(a==b && b==c)
                printf("yes,equilateral triangle");
                else
                printf("no,equilateral triangle");
            break;
        case 4 :
            return 0;
            break;
        }
        return 0;
    }
}
