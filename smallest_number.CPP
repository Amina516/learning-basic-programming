#include<stdio.h>
#include<conio.h>
void main()
 {    //find smallest no by using nested if condition
      int a,b,c;
      printf("Enter 3 Numbers=");
      scanf("%d%d%d",&a,&b,&c);
      if(a<b)
       if(a<c)
         printf("%d is smallest",a);
         else
         printf("%d is smallest",c);
      else
         if(b<c)
         printf("%d is smallest",b);
         else
          printf("%d is smallest",c);
          getch();
            }