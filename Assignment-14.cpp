#include<iostream>
#include<stdlib.h>
using namespace std;
class bill
{
    int n;
    float *cost;
    string items[5];
public:
    void get_data(int m);
    void print_data();
    void print_total();
    void modify();
};
void bill::get_data(int m)
{
    n=m;
    cost=(float*)malloc(n*sizeof(float));
    for(int i=0;i<n;i++)
    {
        cout<<"Enter item name and price"<<"\n";
        cin>>items[i]>>cost[i];
    }
}
void bill::print_data()
{
    cout<<"Item\t"<<"Price"<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<items[i]<<"\t"<<cost[i];
    }
}
void bill::print_total()
{   
    float total=0;
    for(int i=0;i<n;i++)
    {
        total+=cost[i];
    }
    cout<<"Total="<<total;
}
void bill::modify()
{   
    int flag=0;
    string item;
    float newprice;
    cout<<"Enter item name and the new price which are to be modified"<<"\n";
    cin>>item>>newprice;
    for(int i=0;i<n;i++)
    {
        if(items[i]==item)
        {
            cost[i]=newprice;
            flag=1;
        }
    }
    if(flag==1)
        cout<<"Price modified successfully"<<"\n";
    else
        cout<<"Item not present in list"<<"\n";
}
int main()
{
    int a,choice;
    bill reciept;
    cout<<"Enter number of items"<<"\n";
    cin>>a;
    reciept.get_data(a);
    do{
        cout<<"\nEnter your choice:\n1.Print data\n2.Print total\n";
        cout<<"3.Modify\nPress any other key to exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                reciept.print_data();
                break;
            case 2:
                reciept.print_total();
                break;
            case 3:
                reciept.modify();
                break;
            default:
                exit(0);
        }
    }while(1);
    return 0;
}