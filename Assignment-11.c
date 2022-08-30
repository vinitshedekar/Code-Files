//Question-1
/*Structure
Body Mass Index (BMI) Of a person  is found by taking your weight in kilograms and dividing by the square of your height in meters. The BMI categories are:

• Under weight: <18.5

• Normal weight: 18.5–24.9

• Over weight: 25–29.9

• Obesity: BMI of 30 or greater

Write a C program  that will accept weight (First line of input) and height (Second line) (in kilos AND inches) and name(Third Line)

then display Name and associated category as output

 Note: 1 inch=2.5 cm

Input Format

Height and Weight is of type float

Constraints

Should use structure 

Output Format

Name followed by a String representing any one of the following

Under weight

Normal weight

Over weight Obesity

Sample Input

55 
64.96
Luna
Sample Output

Luna 
Normal weight*/

#include<stdio.h>
struct BMI
{
    char name[20];
    float weight, height, bmi;
};

int main()
{
    BMI name1;
    
    scanf("%f%f",&name1.weight,&name1.height);
    scanf("%s",name1.name);
    
    name1.height=(name1.height*2.5)/100;
    name1.bmi=name1.weight/(name1.height*name1.height);
    
    
    printf("%s\n",name1.name);
    if(name1.bmi<18.5)
        printf("Under weight");
    else
    {
        if(name1.bmi>=18.5 && name1.bmi<=24.9)
            printf("Normal weight");
        else
        {
            if(name1.bmi>=25 && name1.bmi<=29.9)
                printf("Over weight");
            else
                printf("Obesity");
        }
    }
}

//Question-2
/*Structure
Write a program to find the topper of n students in the class. 

Constraints:

Student details should be stored in STUDENT structure

Input:

Number of students in class

Name_1 Reg no(Numeric value)_1 Marks_1 in 3 subjects

Name_2 Reg no(Numeric value)_2 Marks_2 in 3 subjects

.......

Output:

Topper is Topper_Name

Eg:

Input:

3

Luna 123 40 50 60

Rocky 321 45 55 65

Rusty 234 70 80 90

Output:

Topper is Rusty*/
 
/*Algorithm
Step1: Start
Setp2: Create a Student structure in that structure create a name array to store name, input Regno, and marks from the user
Setp3: In the main function scan the number of students for which the total has to be calculated and store in the student structure
Setp4: Using for loop scan the values of name,regno and marks for 3 students from the user
Setp5: Using another for loop calculate the total marks of 3 students
Setp6: Using if statement check which student has maximum total marks and store in th arr array
Setp7: Print who is the topper
Setp8: End*/

#include<stdio.h>
float sum(float arr[]);
struct STUDENT
{
    char name[20];
    int regno;
    float mark[3],tot;
};
int main()
{
    int n,m=0;
    scanf("%d",&n);
    STUDENT stu[n];    
    for(int i=0;i<n;i++)
    {
        scanf("%s %f",stu[i].name,&stu[i].regno);
        for(int j=0;j<3;j++)
        {
            scanf("%f",&stu[i].mark[j]);
        }
        stu[i].tot=sum(stu[i].mark);
        if(stu[i].tot>=stu[m].tot)
            m=i;
    }
    printf("Topper is %s",stu[m].name);
}
float sum(float arr[])
{
    float tot=0;
    for(int i=0;i<3;i++)
    {
        tot+=arr[i];
    }
    return tot;
}
