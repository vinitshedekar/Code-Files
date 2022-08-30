#include <iostream>
using namespace std;
int add(int a,int b,int c=8,int d=10);
int add(int a,int b,int c,int d)
{
    return(a+b+c+d);
}

int main()
{
    int p=5,q=10,r=15,s=20;
    cout<<add(p,q,r,s)<<"\n";
    cout<<add(p,q,r)<<"\n";
    cout<<add(p,q)<<"\n";
    return 0;
}
