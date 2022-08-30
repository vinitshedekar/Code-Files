/*Sort
Create a class Student with name, regno, marks of three different subject and total. 
Write a C++ program to find the student whose average mark is less than 50.
Note:
Should create array of objects depending upon the number of students.
Should calculate average based on marks entered.
Should use constructors.
Input:
Number of students:n
Details of n students - name, regno, marks of three different subject
Output:
Details of students whose average mark is less than 50 in format of 
name, regno, marks1, marks2, marks3, average
Eg:
Input:
3
abc 11 90 95 98
zxc 12 40 46 49
qwe 13 95 93 92
Output:
zxc 12 40 46 49 45*/

#include<iostream>
using namespace std;
class stu
{
    string name;
    int reg_no,m1,m2,m3,total,avg;
    public:
    stu()
    {
        
    }
    stu(string a,int b,int c,int d,int e)
    {
        name=a;
        reg_no=b;
        m1=c;
        m2=d;
        m3=e;
    }
    static void average(stu S[],int p)
    {
        for(int i=0;i<p;i++)
        {
            S[i].avg=(S[i].m1+S[i].m2+S[i].m3)/3;
            if(S[i].avg<50)
            {
                S[i].print_details();
            }
        }
    }
    void print_details()
    {
        cout<<name<<" "<<reg_no<<" "<<m1<<" "<<m2<<" "<<m3<<" "<<avg<<endl;
    }
};
int main()
{
    int n;
    cin>>n;
    stu student[n];
    for(int i=0;i<n;i++)
    {
        string nam;
        int r_num,x,y,z;
        cin>>nam>>r_num>>x>>y>>z;
        student[i]=stu(nam,r_num,x,y,z);
    }
    stu::average(student,n);
    return 0;
}