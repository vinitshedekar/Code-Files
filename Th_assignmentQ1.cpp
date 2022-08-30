/*1. A foodcourt provides option of prepaid vouchers. The customers can buy food from the foodcourt using those vouchers.
The foodcourt maintains customer name, voucher id and voucher balance. Whenever a product is bought from the shops in 
foodcourt, the appropriate amount will be deducted from the voucher. Write a program in C++ to define a class FOODCOURT 
with appropriate data members and create a member function to update the voucher balance whenever a product is bought by customer. 
Constructor should be used for initialization.*/

#include<iostream>
using namespace std;
class FoodCourt
{
    public:
        string name;
        int voucher_id;
        int voucher_balance;
    FoodCourt()
    {
        cin>>name>>voucher_id>>voucher_balance;
    }
};
int main()
{
    int n;
    cout<<"Enter number of customers:";
    cin>>n;
    FoodCourt v[n];
    for(int i=0;i<n;i++)
    {
        v[i];
    }
    int a,b;
    cout<<"Enter your ID and Amount:";
    cin>>a>>b;
    for(int i=0;i<n;i++)
    {
        if(v[i].voucher_id==1)
        {
            v[i].voucher_balance-=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i].name<<" "<<v[i].voucher_balance;
    }
}