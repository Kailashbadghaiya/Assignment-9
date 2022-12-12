#include<stdio.h>
#include<conio.h>
int main()
{
    int year = 2023;

    switch(year%100 ==0)
    {
    case 0 :
        switch(year%4 == 0)
        {
        case 0 :
            printf("non leap year\n");
            break;
        case 1:
            printf("Leap year\n");
            break;
        }
        break;
    case 1 :
      switch(year%400 == 0)
      {
          case 0 :
              printf("non leap year\n");
              break;
          case 1 :
            printf("Leap year\n");
      }
    }
}
