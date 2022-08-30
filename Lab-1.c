#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    a++;
    b--;
    d=(a>b)?a*b:a*c;
    printf("The value of d is %d",d);
    return 0;
}