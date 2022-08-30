/*The XYZ online shopping mart maintains a stock record.  If a customer buys a product, appropriately the quantity of product should be 
updated in the stock record. Write a program in C++ to define a class MART with product_id, and available_quantity as private data members. 
Create a member function STOCK to update the quantity of product whenever a customer purchases it. Use constructor for initialization.
Make sure to have
Array of objects
Constructors for initialization

Input:
First line: Enter number of products n
Next n lines enter the details of each product in the format of
product_id available_quantity
Next line Enter the purchase details in the format of
product_id quantity

Output:
Print the details of the product which was bought by the customer in the format of
product_id available_quantity

Sample Input:
3
123 50
124 55
156 70
124 10
Output:
124 45*/


#include<iostream>
using namespace std;
class MART
{
    private:
    string p_id;
    int p_quan;

    public:
    MART()
    {

    }
    MART(string a,int b)
    {
        p_id=a;
        p_quan=b;
    }
    void stock(int o_quan)
    {
        p_quan=p_quan-o_quan;
    }
    string id()
    {
        return p_id;
    }
    void print_details()
    {
        cout<<p_id<<" "<<p_quan<<endl;
    }
};
int main()
{
    int n;
    cin>>n;
    MART M[n];
    for(int i=0;i<n;i++)
    {
        string pro_id;
        int pro_quan;
        cin>>pro_id>>pro_quan;
        M[i]=MART(pro_id,pro_quan);
    }
    string x;
    int y;
    cin>>x>>y;
    for(int i=0;i<n;i++)
    {
        if(M[i].id()==x)
        {
            M[i].stock(y);
            M[i].print_details();
        }
    }
return 0;
}