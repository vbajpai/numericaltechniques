// Euler's Method Of Integration for dy/dx = x + y , y = 1 at x = 0//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float f(float,float);
main(void)
{
          float b,n,h,val;
          float a = 0,func;
          system("cls");
          printf("\nDifferential Equation : dy/dx = y + x\n");
          printf("\nInitial Value : y = 1 at x = 0 \n");
          printf("\nTo Calculate y at x = b\n"); 
          printf("\nEnter b:");
          scanf("%f",&val);
          printf("\nn: No. of Intervals\n");
          printf("\nEnter n:");
          fflush(stdin);
          scanf("%f",&n);
          h = (val-a)/n;
          //printf("%f",h);
          b = 1;
          while(a<val)
          {
                     func = f(a,b);
                     b = b + h*func;
                     a = a + h;   
                            
          }                   
          a = a-h;
          printf("\n------------------------------\n");
          printf("at x = %f , y = %f",a,b);                    
          getch();          
          return(0);
}

float f(float x, float y)
{
      return (x+y);      
}
