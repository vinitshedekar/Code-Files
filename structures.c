#include<stdio.h>
struct STUDENT
{
    char name[20];
    int regno;
    int m1;
    int m2;
    int m3;
    int total;
};
int main()
{
    int i,n;
    scanf("%d \n",&n);
    struct STUDENT stu[n], lg;
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d %d %d\n",&stu[i].name,&stu[i].regno,&stu[i].m1,&stu[i].m2,&stu[i].m3);
        stu[i].total=0;
        stu[i].total=stu[i].m1+stu[i].m2+stu[i].m3;
    }
    lg = stu[0];
    for(i=0;lg.total;)
    {
        lg = stu[i];
    }
    printf("Topper is ",lg.name);
}