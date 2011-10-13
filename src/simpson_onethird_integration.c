// Program to Implement Simpson's 1/3rd Method of Integration //
// Function : 1/(1+x2)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float func(float);
main(void)
{
          int count=1;
          float i=0,a,b,h,f,fact2=0,fact1=0,f1,f2,integral,fact3=0;
          int n;
          printf("\nSimpson's 1/3rd Rule Implementation\n");
          printf("-----------------------------------\n\n");
          printf("Function: 1/(1+x^2)\n\n");
          printf("Enter Lower Limit:");
          scanf("%f",&a);
          printf("\nEnter Upper Limit:");
          scanf("%f",&b);
          printf("\nEnter No. of Subintervals(Even):");
          scanf("%f",&n);
          if(n%2!=0)
          {
                    printf("\nInvalid No. of Subintervals!");
                    getch();
                    exit(0);
          }
          h = (b-a)/n;
          i = a+h;
          f1 = func(a);
          f2 = func(a + n*h);
          fact1 = f1 + f2;
          while(i<=b)
          {
                f = func(i);              
                if(count%2==0)
                {
                              if(i<=n-2)
                                            fact3 = fact3 + f;
                }
                else
                {
                              if(i<=n-1)
                                            fact2 = fact2 + f;
                              
                }
                i = i + h;                
                count++;
          }
                fact2=fact2*4;
                fact3=fact3*2;                      
          
          integral = (h/3)*(fact1 + fact2 + fact3);
          printf("\nIntegral:%f",integral);
          getch();
          return 0;          
}

float func(float x)
{
      float m;
      m = 1 + x*x;
      return (1/m);      
}
