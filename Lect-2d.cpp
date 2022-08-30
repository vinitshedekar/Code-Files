//Constructor

#include<iostream>
using namespace std;

class item
{
    int number;
    float cost;
public:
    item(int a, float b);
    void putdata()
    {
        cout<<"number:"<<number<<"\n";
        cout<<"cost:"<<cost<<"\n";
    }
    void add(item,item);
};

item::item(int a,float b)
{
    number=a;
    cost=b;
}

void item::add(item t1,item t2)
{
    number=t1.number+t2.number;
    cost=t1.cost+t2.cost;
}

int main()
{
    item x(5,6.6), y(10,9.6), z(0,0);
    cout<<"\nObject x"<<"\n";
    x.putdata();
    cout<<"\nObject y"<<"\n";
    y.putdata();
    cout<<"\nObject z"<<"\n";
    z.add(x,y);
    cout<<"\nObject z"<<"\n";
    z.putdata();
return 0;
}