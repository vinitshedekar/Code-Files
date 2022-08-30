#include<iostream>
using namespace std;
class Book
{
    protected:
    string title;
    string author;
    int year;
};
class Publish:public Book
{
    protected:
    string publisher;
    int price;
};
class Library:public Publish
{
  public:
    void getdetails(string a, string b, string c, int d, int e)
    {
        title=a;
        author=b;
        publisher=c;
        year=d;
        price=e;
    }
    void printdetails()
    {
        cout<<title<<" "<<author<<" "<<publisher<<" "<<year<<" "<<price<<"\n";
    }
    static void book_costly(Library B[],int z)
    {
        int cost=0,count=0;
        for(int i=0;i<z;i++)
        {
            if(B[i].price<cost)
                cost=B[i].price;
        }
        for(int i=0;i<z;i++)
        {
            if(B[i].price==cost)
            {
                count++;
            }
        }
        cout<<count<<"\n";
        for(int i=0;i<z;i++)
        {
            if(B[i].price==cost)
            {
                B[i].printdetails();
            }
        }
    }
    
};
int main()
{
    string book_title,book_author,book_publisher; 
    int n,book_price,book_year;
    cin>>n;
    Library B[n];
    for(int i=0;i<n;i++)
    {
        cin>>book_title>>book_author>>book_publisher>>book_year>>book_price;
        B[i].getdetails(book_title,book_author,book_publisher,book_year,book_price);
    }
    Library::book_costly(B,n);
return 0;
}