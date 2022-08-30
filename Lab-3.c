//Do-While statements
/*#include<stdio.h>
void main()
{
    int i=1;
    do
    {
       printf("%d\n",i);
       i=i+1;
    } while (i<=5);
    
}*/

// for statemnts
/*#include<stdio.h>
void main()
{
    int i=1;
    for (i = 1; i <=5; i++)
    {
        printf("%d\n",i);
    }
    
}*/

/*#include<stdio.h>
void main()
{
    int i=0;
    for (; i <=5;)
    {
        i++;
        printf("%d\n",i);
    }
    
}*/


#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    i=1;
    while(i<=n);
    {
        sum+=i;
        i++;
    }
    printf("sum of first 5 natural number is:%d",sum);
    return 0;
}