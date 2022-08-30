#include<stdio.h>
#include<stdlib.h>
float add(float*,int);
void main()
{
    float *marks,*t,total;
    int n;
    printf("Enter number of subjects:");
    scanf("%d",&n);
    marks=(float *)malloc(n*sizeof(float));
    t=marks;
    printf("Enter %d subjects marks:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%f",t);
        t++;
    }
    t=marks;
    for(int i=0;i<n;i++);
    {
        printf("Value %f stored at address %u\n",*t,t);
        t++;
    }
    total=add(marks,n);
    printf("Total marks:%f",total);
}
float add(float *m,int c)
{
    
}