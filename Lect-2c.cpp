//Object as argument

#include<iostream>
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
    void add(item,item);
};
void item::getdata(int a, float b)
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
    item x,y,z;
    cout<<"Object x"<<"\n";
    x.getdata(10,9.6);
    y.putdata();
    z.add(x,y);
    z.putdata();
return 0;
}