#include <iostream>
using namespace std;

class item_number
{

public:
    int number;
    void getnumber(int);
    void putnumber()
    {
        cout<<"number:"<<number<<"\n";
    }

};
void item_number::getnumber(int a)
{
    number=a;
}
class item_cost
{
public:
    float cost;
    void getcost(float);
    void putcost()
    {
        cout<<"cost:"<<cost<<"\n";
    }

};
void item_cost::getcost(float b)
{
    cost=b;
}
class item_inherit:public item_number, public item_cost
{
public:


    void addobj(item_inherit,item_inherit);
};

void item_inherit::addobj(item_inherit t1,item_inherit t2)
{
    number=t1.number+t2.number;
    cost=t1.cost+t2.cost;
}

int main() {
    item_inherit x,y,z;
    cout << "Object x"<<"\n";
   x.getnumber(5);
   x.getcost(6.6);


    cout << "Object y"<<"\n";
    y.getnumber(10);
    y.getcost(9.6);


    z.addobj(x,y);
    z.putnumber();
    z.putcost();

  return 0;
}

