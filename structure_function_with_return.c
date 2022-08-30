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
struct student* details(int);
void main()
{

    int m;
    printf("Enter number of student details to store:\n");
    scanf("%d",&m);
    struct student *s;
    s=details(m);
    for(int i=0;i<m;i++)
    {
        printf("Total marks of %s is %d\n",s->name,s->total);
        s++;
    }

}
struct student* details(int n)
{

    struct student *s,*temp;
    s=(struct student *)malloc(n*sizeof(struct student));
    temp=s;
    for(int i=0;i<n;i++)
    {
        printf("Enter the student name:\n");
        scanf("%s",temp.name);
        printf("Enter registration number:\n");
        scanf("%d",*temp.regno);
        printf("Enter three subject marks:\n");
        scanf("%d",&temp->mark1);
        scanf("%d",&temp->mark2);
        scanf("%d",&temp->mark3);
        temp->total=temp->mark1+temp->mark2+temp->mark3;
        temp++;
    }
    return s;
}
