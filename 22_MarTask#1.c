#include<stdio.h>

struct bmi
{
    float weight, height, index;
    char name[20];
};

int main()
{
    bmi b1;
    
    scanf("%f%f",&b1.weight,&b1.height);
    scanf("%s",b1.name);
    
    b1.height=(b1.height*2.5)/100;
    b1.index=b1.weight/(b1.height*b1.height);
    
    
    printf("%s\n",b1.name);
    if(b1.index<18.5)
        printf("Under weight");
    else
    {
        if(b1.index>=18.5 && b1.index<=24.9)
            printf("Normal weight");
        else
        {
            if(b1.index>=25 && b1.index<=29.9)
                printf("Over weight");
            else
                printf("Obesity");
        }
    }
}