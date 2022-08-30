/*3.A foodcourt provides option of prepaid vouchers. The customers can buy food from the foodcourt using those vouchers. 
The foodcourt maintains customer name, voucher id and voucher balance. Whenever a product is bought from the shops in foodcourt, 
the appropriate amount will be deducted from the voucher. Write a program in C++ to define a class FOODCOURT with data members 
voucher id and voucher balance. Create a class CUSTOMER with data member customer name. Define get member function in both classes 
to assign values to data members. Create another class VOUCHER which inherits FOODCOURT and CUSTOMER. Define a member function in 
class VOUCHER to update the voucher balance whenever a product is bought by customer. Create objects of class VOUCHER and perform the task.*/

#include<iostream>
using namespace std;
class FoodCourt
{
public:
    int id,vb;
    void getdata();
};
class customer
{
public:
    char name[20];
    void getdata();
};
class voucher:public FoodCourt,public customer
{
public:
    int member(int a,int b,int c);
};
int voucher::member(int a,int b,int c)
{
    c-=b;
    cout<<c;
return c;
}
int main()
{
    int n;
    cout<<"Enter number of customers:"<<endl;
    cin>>n;
    FoodCourt t1[n];
    customer t2[n];
    voucher t3[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name,id,voucher balance"<<endl;
        cin>>t3[i].name>>t3[i].id>>t3[i].vb;
    }
    int u,o;
    cout<<"Enter ur id and amount:"<<endl;
    cin>>u>>o;
    for(int i=0;i<n;i++)
    {
        if(u==t3[i].id)
        {
            t3[i].vb=t3[i].member(i,o,t3[i].vb);
        }
    }
}
