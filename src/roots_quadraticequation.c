//WAP TO FIND ROOTS OF QUADRITIC EQUATION //

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
main()
{
float a,b,c,D,r1,r2,real,imag;
     system("cls");
     printf("\n\nRoots of Quadritic Equation Finder\n ");
     printf("----------------------------------\n\n"); 
	 printf("\nFor Equation ax2 + bx + c");
	 printf("\nGive value for");
	 printf("\na:");
		scanf("%f",&a);
	 printf("\nb:");
		scanf("%f",&b);
	 printf("\nc:");
		scanf("%f",&c);
	 D=(pow(b,2))-(4*a*c);
		if(D>=0)

			{
			  r1=((-b) + pow(D,.5))/(2*a);
			  r2=((-b) - pow(D,.5))/(2*a);
			  printf("\nRoot1:%f",r1);
			  printf("\nRoot2:%f",r2);
			}
		else
			{
			  D=-D;
			  real = (-b)/(2*a);
			  imag = pow(D,.5)/(2*a);
			  printf("\nRoot1:%f + %fi",real,imag);
			  printf("\nRoot2:%f - %fi",real,imag);
			}
getch();
}
