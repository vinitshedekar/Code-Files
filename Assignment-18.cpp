#include<iostream>
using namespace std;
class A
{
public:
    void print_a()
    {
        cout<<"I am A"<<"\n";
    }
};
class B
{
public:
    void print_b()
    {
        cout<<"I am B"<<"\n";
    }
};
class C:public A,public B
{
public:
    void print_c()
    {
        cout<<"I inherit both A and B"<<"\n";
    }
};
int main()
{
    A x;
    B y;
    C z;
    x.print_a();
    y.print_b();
    z.print_c();
    z.print_a();
    z.print_b();
return 0;
}