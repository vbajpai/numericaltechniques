// Program to Implement Newton Forward Difference Interpolation Formula // 
                        // by Vaibhav Bajpai //

#include<stdio.h>
#include<conio.h>
float x,a,h;
float val,u;
float y[10],yresult;
float dely[10];
float diff(float,float,int,int);
main(void)
{
    int i,k,num;   
    system("cls");      
    printf("\nProgram to Implement Newton Forward Difference Interpolation Formula");
    printf("\n--------------------------------------------------------------------\n\n\n");
    printf("Enter No. of values of y to be entered(x>=4):");
    scanf("%d",&num);
    printf("\nEnter x for which y is to be determined:");
    scanf("%f",&x);
    printf("\nEnter x(0):");
    scanf("%f",&a);
    printf("\nEnter h(Interval):");
    scanf("%f",&h);
    for(i = 0;i<num;i++)
    {
          printf("\nEnter y(%d):",i);
          scanf("%f",&y[i]);      
    }
                   u = (x-a)/h;
                   dely[0] = y[0];
                   for(i=1;i<num;i++)
                   {
                      k = i;             
                      dely[i] = diff(y[i],y[0],i,k);                   
                   }
                   
    yresult = y[0] + u * dely[1] + ( u * (u-1) / 2 )* dely[2] + ( u * (u-1)* (u-2) / 6 )* dely[3] ;
    printf("\n\nValue of y at x = %f : %f",x,yresult);                        
    fflush(stdin);
    getch();
}


float diff(float x,float z,int n,int k)        // Recursive Function
{
   float val;
   if(n==1)
           return (x-z);
   else
   {
           n--;
           val = diff(y[k],y[k-1],n,k)  - diff(y[k-1],y[k-2],n,k-1);          
   }
   return val;
}
