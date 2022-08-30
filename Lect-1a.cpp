//Sample Program

#include<iostream>
using namespace std;

class item
{
    int number;
    float cost;
public:
    //int number1;
    void getdata(int a,float b);
    void putdata()
    {
        cout<<"number:"<<number<<"\n";
        cout<<"cost:"<<cost<<"\n";
    }
};

void item::getdata(int a,float b)
{
    number=a;
    cost=b;
}

int main()
{
    item x;
    cout<<"object x"<<"\n";
    //x.number=10;
    //cout<<"Number1:"<<x.number<<"\n";
    x.getdata(5,6.6);
    x.putdata();

    item y;
    cout<<"object y"<<"\n";
    x.getdata(10,9.6);
    x.putdata();

    return 0;
}