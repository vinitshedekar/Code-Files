#include<stdio.h>

float sum(float a[]);

struct student
{
    char name[20];
    int regno;
    float marks[3],total;
    
};

int main()
{
    int n,max=0;
    scanf("%d",&n);
    student s[n];    
    for(int i=0;i<n;i++)
    {
        scanf("%s%f",s[i].name,&s[i].regno);
        
        for(int j=0;j<3;j++)
        {
            scanf("%f",&s[i].marks[j]);
        }
        
        s[i].total=sum(s[i].marks);
        
        
        if(s[i].total>=s[max].total)
            max=i;
    }
    
    printf("Topper is %s",s[max].name);

    
    return 0;
}

float sum(float a[])
{
    float total=0;
    
    for(int i=0;i<3;i++)
    {
        total+=a[i];
    }
    
    return total;
}