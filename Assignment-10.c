#include<stdio.h>
#include<stdlib.h>
void sort(int *,int);
int main()
{
    int *num,*a;
    int b;
    scanf("%d",&b);
    a=(int *)malloc(b*sizeof(int));
    num=a;
    for (int i=0;i<b;i++){
        scanf("%d", num);
        num++;
    }
    num=a;
    sort(num,b);
    for (int i=0;i<b;i++){
        printf("%d ",*num);
        num++;
    }
    return 0;
}
void sort(int *m,int n)
{
    int c,d,*e;
    for (int k=0;k<n;k++){
        e=m;
        for(int j=0;j<n-1;j++){
            if (*e>*(e+1)){
                c=*e;
                *e=*(e+1);
                *(e+1)=c;
            }
            e++;
        }
    }
}