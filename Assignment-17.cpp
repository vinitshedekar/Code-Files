/*OOP-1
Two different e-commerce websites ABC and PQR are selling the goods. The sites display the product name and cost.
Design a C++ program to compare the cost of products in both websites. Create resultant array of products with minimum cost and display it.
Use array of object.
First line of input represents the number of elements in first array m
First line of input represents the number of elements in first array n
Followed by m lines for first array
Followed by n lines for second array
Sample input
3
3
Product-1 100
Product-2 200
Product-4 400
Product-1 120
Product-2 220
Product-3 300

Sample Output
Product-1 100
Product-2 200
Product-3 300
Product-4 400*/


#include <iostream>
using namespace std;
class website
{
public:
    string product;
    int price;
    void getdetails(string a,int b)
    {
        product=a;
        price=b;
    }
};
int main()
{
    string product_id;
    int m,n,product_price;
    cin>>m;
    cin>>n;
    website ABC[m],PQR[n];
    for (int i=0;i<m;i++) // Taking input for the first website
    {
        cin>>product_id;
        cin>>product_price;
        ABC[i].getdetails(product_id,product_price);
    }
    for (int i=0;i<n;i++) // Taking input for the second website
    {
        cin>>product_id;
        cin>>product_price;
        PQR[i].getdetails(product_id,product_price);
    }
     for (int j=0;j<m;j++) // comparing the product id by treating it as an array
        {
            if (ABC[j].product[8]-'0'==PQR[j].product[8]-'0')  // if the product ids are same then printing the cheapest one
            {
                int x,y;
                x=ABC[j].product[8]-'0';
                y=PQR[j].product[8]-'0';
                if(ABC[j].price>PQR[j].price)
                {
                    cout<<"Product-"<<y<<' '<<PQR[j].price<<"\n";
                }
                else if(ABC[j].price<PQR[j].price)
                {
                    cout<<"Product-"<<x<<' '<<ABC[j].price<<"\n";
                }
            }
            else if (ABC[j].product[8]-'0'!=PQR[j].product[8]-'0') // if the product ids are not same 
            {
                int p,q;
                p= ABC[j].product[8]-'0';
                q= PQR[j].product[8]-'0';
                if (ABC[j].product[8]-'0'>PQR[j].product[8]-'0')
                {
                    cout<<"Product-"<<q<<' '<<PQR[j].price<<"\n";
                    cout<<"Product-"<<p<<' '<<ABC[j].price<<"\n";
                }
               else if (ABC[j].product[8]-'0'<PQR[j].product[8]-'0')
                {
                    cout<<"Product-"<<p<<' '<<ABC[j].price<<"\n";
                    cout<<"Product-"<<q<<' '<<PQR[j].price<<"\n";
                }
            }
        }
    return 0;
}