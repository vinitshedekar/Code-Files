#include<stdio.h>
void main()
{
    int a,*x;
    a=5,x=&a;
    printf("value of a:%d\n",a);
    printf("Address of a:%u\n",x);
    printf("Value at x:%d\n",*x);
    printf("Address of x:%u",&x);
}