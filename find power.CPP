#include<stdio.h>
#include<conio.h>
void calc_power(int a,int b)
  {
      int r=1;
      int n=1;
      while(r<=b)
      {
          n=n*a;
          r++;
              }
      printf("The number raised to power is = %d",n);
      }
      void main()
      {
         int a,b;
         printf("Enter a number:");
         scanf("%d",&a);
         printf("Enter power:");
         scanf("%d",&b);
         calc_power(a,b);
         getch();

                     }
