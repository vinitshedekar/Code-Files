/*Structure and Function
Write a C program using functions and structure
Given the follwing details for a set of n students
Name Enrollment number M1 CR1 M2 CR2 M3 CR3 M4 CR4 M5 CR5 M6 CR6 
Display the topper's name enrollment_no marks and GPA and also display the number of students who got less than 5 GPA
Input
First line represents the number of students n
Each of the following n lines has the following format
Name Enrollment_number M1 CR1 M2 CR2 M3 CR3 M4 CR4 M5 CR5 M6 CR6
OUTPUT
DETAILS OF TOPPER AND GPA IN FIRST LINE
NUMBER OF STUDENTS WHO GOT LESS THAN 5 GPA IN SECOND LINE
Grades and Weightage
S- 10
A-9
B-8
C-7
D-6
E-5
F-4
GPA FORMULA=(M1*CR1)+(M2*CR2)+(M3*CR3)+(M4*CR4)+(M5*CR5)+(M6*CR6)/(CR1+CR2+CR3+CR4+CR5+CR6)
INPUT
3
RAJ 12345 10 2 9 3 8 4 10 2 10 1 10 2 
PRIYA 12346 10 2 9 3 9 4 8 2 7 1 10 2 
PREETI 12347 8 2 8 3 8 4 9 2 8 1 9 2  
OUTPUT
RAJ 12345 10 2 9 3 8 4 10 2 10 1 10 2  9.21
0*/
/*Algorithm
Step1: Start
Setp2: Create a Student structure in that structure create a name array to store name, input Regno, and marks from the user
Setp3: In the main function scan the number of students for which the GPA has to be calculated and store in the student structure
Setp4: Using for loop scan the values of name,regno and marks for n students from the user
Setp5: Using another for loop calculate the GPA of n students
Setp6: Using if statement check how many students have got less then 5 GPA
Setp7: Print who has highest GPA and also print how many students have got less then 5 GPA
Setp8: End*/

#include<stdio.h>
float gpa(struct STUDENT s[],int x);
void calculation(struct STUDENT s[],int x);
struct STUDENT
{
    char name[20];
    int regno;
    float mark[6],credit[6],GPA;
};
int main()
{
    int n;
    scanf("%d",&n);
    STUDENT stu[n];    
    for(int i=0;i<n;i++)
    {
        scanf("%s %d",stu[i].name,&stu[i].regno);
        for(int j=0;j<6;j++)
        {
            scanf("%f %f",&stu[i].mark[j],&stu[i].credit[j]);
        }
    }
    gpa(stu,n);
    calculation(stu,n);
    return 0;
}

float gpa(struct STUDENT s[],int x)
{
    for(int i=0;i<x;i++)
    {
        float tot1=0;
        float tot2=0;
        for(int j=0;j<6;j++)
        {
            tot1+=(s[i].mark[j]*s[i].credit[j]);
            tot2+=s[i].credit[j];
        }
        s[i].GPA=tot1/tot2;
    }
}
void calculation(struct STUDENT s[],int x)
{
    int a=0,b=0;
    for(int i=0;i<x;i++)
    {
        if(s[i].GPA>=s[a].GPA)
            b=i;
        if(s[i].GPA<5)
            a++;
    }
    printf("%s %d ",s[b].name, s[b].regno);
    for(int j=0;j<6;j++)
    {
        printf("%0.0f %0.0f ",s[b].mark[j], s[b].credit[j]);
    }
    printf("%0.2f",s[b].GPA);
    printf("\n%d",a);
}