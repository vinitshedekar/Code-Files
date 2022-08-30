#include<iostream>
using namespace std;
static int a=0,b=1,c=0,d=0,e=0,f=0;
class XYZ
{
public:
string Name,Designation;
int Eno,Salary;
void high_salary(int x,int y)
    {
        c+=x;
        if(x>a)
        {
            a=x;
            e=a;
            b=y;
        }
}
void low_salary(int p,int q)
    {
        if(p<e)
        {
            e=p;
            f=q;
        }
    }
};
int main()
{
    XYZ t;
    int num_empoly;
    cin>>num_empoly;
    XYZ a[num_empoly];
    for(int i=0;i<num_empoly;i++)
    {
       cin>>a[i].Eno;
       cin>>a[i].Name;
       cin>>a[i].Designation;
       cin>>a[i].Salary;
       t.high_salary(a[i].Salary,i);
    }
    for(int i=0;i<num_empoly;i++)
    {
        t.low_salary(a[i].Salary,i);
    }
    cout<<c<<"\n";
    cout<<a[b].Name<<"\n";
    cout<<a[f].Name<<"\n";
}