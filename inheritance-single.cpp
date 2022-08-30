#include <iostream>
using namespace std;

class item
{
    int sno;
    static int count;

public:
    int number;
    float cost;
    void getdata(int a,float b);
    void putdata()
    {
        cout<<"number:"<<number<<"\n";
        cout<<"cost:"<<cost<<"\n";
    }

};
class addfeatures:public item
{
public:
    void add(addfeatures,addfeatures);
    int number;
    float cost;
    void getdata(int a,float b);
    void putdata()
    {
        cout<<"number:"<<number<<"\n";
        cout<<"cost:"<<cost<<"\n";
    }

};
int item::count;
void addfeatures::getdata(int a,float b)
{
   count++;
   sno=count;
    number=a;
    cost=b;
}

void addfeatures::add(addfeatures t1,addfeatures t2)
{

    number=t1.number+t2.number;
    cost=t1.cost+t2.cost;
}

int main() {
    addfeatures x,y,z;
    cout << "Object x"<<"\n";
    x.getdata(5,6.6);
    x.putdata();


    cout << "Object y"<<"\n";
    y.getdata(10,9.6);
    y.putdata();

    z.add(x,y);
    z.putdata();

  return 0;
}

