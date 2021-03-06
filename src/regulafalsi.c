// Regula Falsi Implementation //

// For function 3x + sin(x) - e(x)

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

float func(float);
float Regula(float,float,float,float,int);
main(void)
{
          int itr;
          float x0 = 0;
          float x1 = x0;
          float x,a;
          float y0,y1,temp=x0;
          
          system("cls");
          printf("\nRegula Falsi Implementation\n");
          printf("---------------------------\n\n");
          printf("Function: 3x + sin(x) - e(x)\n\n");
          
          printf("Enter No. of Iterations:");
          scanf("%d",&itr);
          y0 = func(x0);                  // y0 is negative
          y1 = func(x1);
          
          while((y0*y1)>0)  
          {
                 x1 = x1 + 0.1; 
                 y1 = func(x1);                                                 
          }          
          x = Regula(x0,x1,y0,y1,itr);   
          printf("Approximate Root:%f",x);
          getch();  
                              
}

float func(float x)
{
     return (3*x+ sin(x)- exp(x));      
}

float Regula(float x0,float x1,float y0,float y1,int itr)
{
        int i=0;
        float x,fx;
        printf("\n\nIteration No.\t\tX2\t\tf(X2)\n");  
        printf("------------------------------------------------\n\n");
        while(i<itr)     
        {
                x = (x0 - ((x1-x0)/(y1-y0))*y0);
                fx = func(x);
                if(fx*y0 < 0)
                {
                         x1 = x;
                         y1 = fx;                         
                }
                else
                {
                         x0 = x;
                         y0 = fx;
                }
                         
                printf("%5d %24f %17f\n\n",i,x,fx);                
                i++;                          
        }
        printf("------------------------------------------------\n\n");
        return(x);
}

