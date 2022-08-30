//Using If else If statement
#include <stdio.h>
void main()
{
    float a,b,c,avg;
    printf("Enter 3 subject marks:\n");
    scanf("%f%f%f",&a,&b,&c);
    avg = (a+b+c)/3.0;
    if(avg>=90)
    {
        printf("Your grade is S and your avg marks are %.2f",avg);
    }
    else if(avg>=80 && avg<89)
    {
        printf("Your grade is A and your avg marks are %.2f",avg);
    }
    else if(avg>=70 && avg<79)
    {
        printf("Your grade is B and your avg marks are %.2f",avg);
    }
    else if(avg>=60 && avg<69)
    {
        printf("Your grade is C and your avg marks are %.2f",avg);
    }
    else if(avg>=50 && avg<59)
    {
        printf("Your grade is D and your avg marks are %.2f",avg);
    }
    else if(avg<50)
    {
        printf("Your grade is F and your avg marks are %.2f",avg);
    }
    else
    {
        printf("Enter the correct marks!!!!");
    }
}


//Using Switch Statement
/*#include <stdio.h>
int main()
{
    float a,b,c,avg;
    int int_avg;
    printf("Enter 3 subject marks:\n");
    scanf("%f%f%f",&a,&b,&c);
    avg = (a+b+c)/3;
    int_avg=(int)avg;

    switch(int_avg)
    {
    case 90 ... 100 :
        printf("Your grade is S and your avg marks are %.2f",avg);
        break;
    case 80 ... 89:
        printf("Your grade is A and your avg marks are %.2f",avg);
        break;
    case 70 ... 79 :
        printf("Your grade is B and your avg marks are %.2f",avg);
        break;
    case 60 ... 69 :
        printf("Your grade is C and your avg marks are %.2f",avg);
        break;
    case 50 ... 59 :
        printf("Your grade is D and your avg marks are %.2f",avg);
        break;
    default:
        printf("Your grade is F and your avg marks are %.2f",avg);
    }
}*/
