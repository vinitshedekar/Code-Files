/*#include <stdio.h>
void main()
{
   int i,j,n;
   printf("Enter the number of lines: ");
   scanf("%d",&n);
   for (i=n;i>=1;i--)
    {
      for (j=i;j>=1;j--)
      {
         printf("* ");
      }
      printf("\n");
   }
}*/

#include<stdio.h>
void main()
{
	 int a,b,hcf,lcm,i;
	 printf("Enter first number: ");
	 scanf("%d",&a);
	 printf("Enter second number: ");
	 scanf("%d",&b);
	 for(i=1;i<=a;i++)
	 {
		  if(a%i==0 && b%i==0)
		  {
		   	hcf=i;
		  }
	 }
	 lcm=(a*b)/hcf;
	 printf("HCF = %d\n",hcf);
	 printf("LCM = %d",lcm);
}



