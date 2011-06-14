// Bisection Method //
// Defined for 3x + sin(x) - e(x) //


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float func(float);
void bisect(float,float,int*,float*);
main(void)
{
   int max,it=0;
   float x,x1,err, a, b, fa, fb;
  //while(1)
   {
           system("cls");
           printf("\n\nBisection Method\n");
           printf("----------------\n\n");
           printf("Function: 3x + sin(x) - e(x)\n\n");
           printf("Enter Interval [a,b]:");
           scanf("%f %f", &a,&b);
           if(func(a)*func(b)>0)
           {
                      printf("\Invalid a and b");
                      printf("\n1 root lies between [0,1]");                     
                      getch();                      
                      exit(0);
           }
           printf("\nEnter Max. Number of Iterations:");
           scanf("%d",&max);
           printf("\nEnter Allowed Error:");
           scanf("%f",&err);
           printf("\n\nIteration No.\t\tX2\t\tf(X2)\n");  
           printf("------------------------------------------------\n\n");
           bisect(a,b,&it,&x);           
           while(it<=max)
           {
               if(func(a)*func(x)<0)
                     b = x;
               else
                     a = x;                           
               bisect(a,b,&it,&x1);
               if(fabs(x1-x)<err)
               {               
                                 printf("------------------------------------------------\n\n");
                                 printf("Approximate Root:%3.5f",x1);
                                 getch();
                                 exit(0);
               } 
               x = x1;
           }
           printf("------------------------------------------------\n\n");
           if(fabs(x1-x)<err)
           {
                             printf("Root Cannot Be Determined");
                             fflush(stdin);
                             getchar();
                             exit(0);
           }
           
   }
   fflush(stdin);
   getchar();
   return(0);
}

float func(float x)
{
    return(3*x + sin(x) - exp(x));
}
void bisect(float a, float b, int *it, float *x)
{
     *x = (a+b)/2;
     (*it)++;    
      printf("%5d %24f %17f\n\n",*it,*x,func(*x));             
}
