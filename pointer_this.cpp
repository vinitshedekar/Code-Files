#include <iostream>
using namespace std;

class item
{
    string productname;
    float cost;

public:
   item(string a,float b);
   item costly(item);
   void putdata()
    {
        cout<<"Product Name:"<<productname<<"\n";
        cout<<"cost:"<<cost<<"\n";
    }
};

item::item(string a,float b)
{
    productname=a;
    cost=b;
}
item item::costly(item a)
 {
     if(a.cost>cost)
        return a;
     else
        return *this;
 }

int main() {
    item x("ABC",10),y("XYZ",30),z("PQR",5);
    item p=x.costly(y);//y.costly(x);
    p.putdata();
    p=x.costly(z);
    p.putdata();

  return 0;
}
