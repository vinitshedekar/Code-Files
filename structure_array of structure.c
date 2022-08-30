#include<stdio.h>
struct student
{
    char name[20];
    int regno;
    int mark1;
    int mark2;
    int mark3;
    int total;
};
void main()
{
    int n;
    printf("Enter number of student details to store:\n");
    scanf("%d",&n);
    struct student stu[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the student name:\n");
        scanf("%s",stu[i].name);
        printf("Enter registration number:\n");
        scanf("%d",&stu[i].regno);
        printf("Enter three subject marks:\n");
        scanf("%d",&stu[i].mark1);
        scanf("%d",&stu[i].mark2);
        scanf("%d",&stu[i].mark3);
        stu[i].total=stu[i].mark1+stu[i].mark2+stu[i].mark3;
    }
    for(int i=0;i<n;i++)
        printf("Total marks of %s is %d\n",stu[i].name,stu[i].total);
}
