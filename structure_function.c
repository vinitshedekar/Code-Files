#include<stdio.h>
struct student
{
    char name[20];
    int regno;
    struct
    {
        int internal;
        int external;
    }mark[3];
    int total;
};
void print(struct student s[],int);
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
        stu[i].total=0;
        for(int j=0;j<3;j++)
        {
            printf("\nEnter internal of subject%d:",j+1);
             scanf("%d",&stu[i].mark[j].internal);
             printf("\nEnter external of subject%d:",j+1);
             scanf("%d",&stu[i].mark[j].external);
             stu[i].total=stu[i].total+stu[i].mark[j].internal+stu[i].mark[j].external;
        }
    }
    print(stu,n);
}
void print(struct student s[],int m)
{
    for(int i=0;i<m;i++)
        printf("Total marks of %s is %d\n",s[i].name,s[i].total);
}
