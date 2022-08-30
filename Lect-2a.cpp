//static data member

#include<iostream>
using namespace std;

class item 
{
    static int count;
    int number;
    float cost;

public:
    void getdata(int a,float b);
    void putcount()
    {
        cout<<"Count:"<<count<<"\n";
    }
};
int item::count;
void item::getdata(int a,float b)
{
    number=a;
    cost=b;
    count++;
}

int main()
{
    item x,y,z;
    x.getdata(5,6.6);
    x.putcount();
    y.getdata(10,20);
    y.putcount();
    z.getdata(2,3);
    z.putcount();
return 0;
}
    