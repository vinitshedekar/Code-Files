#include<iostream>
using namespace std;

class Salesperson
{
    int salescount, attendence;

    public:

	
    Salesperson():salescount(0),attendence(0){}
    
    Salesperson(int a, int b)
    {
        salescount=a;
        attendence=b;
    }

    void printdata()
    {
        cout<<salescount<<endl<<attendence<<endl;
    }

    friend Salesperson operator+(Salesperson x, Salesperson y);

};

class sq:public Salesperson
{
	
};

Salesperson operator+(Salesperson x, Salesperson y)
{
    Salesperson z;
    z.salescount = x.salescount + y.salescount;
    z.attendence = x.attendence + y.attendence;

    return z;

}

int main()
{
    int s1,s2,a1,a2;
    cin>>s1>>a1>>s2>>a2;
    Salesperson HY1(s1,a1), HY2(s2,a2), FY, *e;
    sq sr;
    e=&sr;

    FY = HY1 + HY2 ;
    FY.printdata();


    return 0;
}