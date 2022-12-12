#include<stdio.h>
#include<conio.h>
int main()
{
    int num ;

    printf("Enter a Integer number :\n");
    scanf("%d",&num);

    while(1)
    {
        switch(num>0)
        {
        case 1 :
            printf("positive to convert negative number is %d\n",-num);
            break;
        case 0 :
            switch(num<0)
            {
            case 1 :
                printf("negative convert to positive number is %d\n",-num);
                break;
            case  0 :
                switch(num==0)
                {
                case 1 :printf("number is zero %d\n",num);
                    break;
                case 0 :
                    printf("Invalid number\n");
                    break;
                }
                break;
            }
            break;
        }
        return 0;
    }
}
