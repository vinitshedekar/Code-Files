#include<iostream>
using namespace std;
int main()
{
    int a,*x;
    a=5,x=&a;
    cout<<"Value of a:"<<a<<"\n";
    cout<<"Address of a:"<<x<<"\n";
    cout<<"Value at x:"<<*x<<"\n";
    cout<<"Address of x:"<<&x;
    return 0;
}
