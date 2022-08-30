/*Single Inheritance
2.A foodcourt provides option of prepaid vouchers. The customers can buy food from the foodcourt using those vouchers. 
The foodcourt maintains customer name, voucher id and voucher balance. Whenever a product is bought from the shops in foodcourt, 
the appropriate amount will be deducted from the voucher. Write a program in C++ to define a class FOODCOURT with appropriate data 
members and get member function to assign values to data member. Create another class VOUCHER which inherits FOODCOURT. Define a member 
function in class VOUCHER to update the voucher balance whenever a product is bought by customer. Create objects of class VOUCHER and 
perform the task.*/

#include<iostream>
using namespace std;
class FoodCourt
{
public:
    char name[20];
    int voucher_id,Voucher_balance;
    void getdata();
}v1;
void FoodCourt:: getdata()
{
    cin>>name;
    cin>>voucher_id>>Voucher_balance;
}
class voucher: public FoodCourt
{
public:
    int member(FoodCourt a);
}v2;
int voucher::member(FoodCourt a)
{
    int n;
    cout<<"Enter amount"<<endl;
    cin>>n;
    a.Voucher_balance-=n;
    return a.Voucher_balance;
    cout<<a.Voucher_balance;
}
int main()
{
    int n,m;
    cout<<"Enter the total number of customers:"<<endl;
    cin>>n;
    FoodCourt V[n];
    for(int i=0;i<n;i++)
    {
        V[i].getdata();
    }
    cout<<"Enter the ID number:";
    cin>>m;
    for(int i=0;i<n;i++)
    {
        if(m==V[i].voucher_id)
        {
            V[i].Voucher_balance=v2.member(V[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
    cout<<V[i].name<<" "<<V[i].Voucher_balance;
    }
}
