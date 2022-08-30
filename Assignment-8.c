/*Step1: Start
Step1: Declare variables series, a,b, c
Step1: Initialize the variables, a=0, b=1, and c=0
Step1: Enter the number of terms of the Fibonacci series to be printed
Step1: Print the First two terms of series
Step1: Use loop for the following steps
Step1: c=a+b
Step1: a=b
Step1: b=c
Step1: increase the value of the series variable each time by 1
Step1: print the value of the c
Step1: End*/

#include<stdio.h>
void fibonacci(int series)
{
    static int a=0,b=1,c;
    if (series>0)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
        fibonacci(series-1);
    }
}
int main()
{
    int series;
    scanf("%d",&series);
    printf("%d",1);
    fibonacci(series-1);
    return 0;
}