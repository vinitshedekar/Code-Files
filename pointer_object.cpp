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
};

void item::getdata(int a,float b)
{
    number=a;
    cost=b;
}


int main() {
    item x;
    item *p=&x;
    cout << "Object x"<<"\n";
    x.getdata(5,6.6);
    cout << "x-printed by p"<<"\n";
    p->putdata();
    cout << "x-printed by x"<<"\n";
    x.putdata();
    cout << "x-printed by *p"<<"\n";
    (*p).putdata();

    item *q=new item;
    q->getdata(10,9.6);
    cout << "printed by q"<<"\n";
    q->putdata();
    cout << "printed by *q"<<"\n";
    (*q).putdata();

   /*item *r=new item[5];
    item *t=r;
    int a,b;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter value of number and cost of product:"<<i+1<<"\n";
        cin>>a>>b;
        t->getdata(a,b);
        t++;
    }
    t=r;
    for(int i=0;i<5;i++)
    {
        cout<<"Product"<<i+1;
        t->putdata();
        t++;
    }*/

  return 0;
}
