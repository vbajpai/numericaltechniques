// Program to Implement Trapazoidal's Method of Integration on 1/(1+x2) //

#include<stdio.h>
float func(float);
main(void)
{
          float i=0,a,b,n,h,f,fact2=0,fact1=0,f1,f2,integral;
          printf("Enter Value for a:");
          scanf("%f",&a);
          printf("Enter value for b:");
          scanf("%f",&b);
          printf("Enter value for n:");
          scanf("%f",&n);
          h = (b-a)/n;
          i = a+h;
          f1 = func(a);
          f2 = func(n);
          fact1 = f1 + f2;
          while(i<=n)
          {
                f = func(i);              
                fact2 = fact2 + f;
                i = i + h;                
          }
                printf("%f",fact2);
                fact2=fact2*2;                       
          
          integral = (h/2)*(fact1 + fact2);
          printf("\nIntegral:%f",integral);
          fflush(stdin);
          getchar();
          return 0;          
}

float func(float x)
{
      float m;
      m = 1 + x*x;
      return (1/m);      
}
