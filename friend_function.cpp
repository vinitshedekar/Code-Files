#include <iostream>
using namespace std;

class item
{
    int number;
    float cost;

public:
    void getdata(int a,float b);
    void putdata()
    {
        cout<<"number:"<<number<<"\n";
        cout<<"cost:"<<cost<<"\n";
    }
   friend void add(item,item);
};


void item::getdata(int a,float b)
{
    number=a;
    cost=b;
}

void add(item t1,item t2)
{
    cout<<"Number:"<<t1.number+t2.number<<"\n";
    cout<<"Cost:"<<t1.cost+t2.cost;
}

int main() {
    item x,y;
  //   x.number=5;
    cout << "Object x"<<"\n";
    x.getdata(5,6.6);
    x.putdata();


    cout << "Object y"<<"\n";
    y.getdata(10,9.6);
    y.putdata();

    add(x,y);

  return 0;
}
