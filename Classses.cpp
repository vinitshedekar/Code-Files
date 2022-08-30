#include<iostream>
#include<stdlib.h>
using namespace std;

class bill
{
    int n;
    float *price;
    string items[50];

    public:

    void getData(int m)
    {
        n=m;
        price=(float*)malloc(n*sizeof(float));

        for(int i=0;i<n;i++)
        {
            cout<<"Enter item name and price"<<endl;
            cin>>items[i]>>price[i];
            
        }
    }

    void printData()
    {
        cout<<"Item\t"<<"Price"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<items[i]<<"\t"<<price[i]<<endl;
        }
    }

    void printTotal()
    {   
        float total=0;
        for(int i=0;i<n;i++)
        {
            total+=price[i];
        }
        cout<<"Total = "<<total<<endl;
    }

    void modify()
    {   
        int flag=0;
        string item;
        float newprice;
        cout<<"Enter item whose price is to be modified and the new price"<<endl;
        cin>>item>>newprice;

        for(int i=0;i<n;i++)
        {
            if(items[i]==item)
            {
                price[i]=newprice;
                flag=1;
            }
        }
        if(flag==1)
            cout<<"Price modified successfully"<<endl;
        else
            cout<<"Item not present in list"<<endl;
    }
};

int main()
{
    int a,choice;
    bill b1;
    cout<<"Enter number of items"<<endl;
    cin>>a;
    b1.getData(a);
    
    do{
        cout<<"Enter 1 to print data"<<endl;
        cout<<"Enter 2 to print total"<<endl;
        cout<<"Enter 3 to modify price"<<endl;
        cout<<"Enter 4 to exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                b1.printData();
                break;
            case 2:
                b1.printTotal();
                break;
            case 3:
                b1.modify();
                break;
            case 4:
                exit(0);
            default:
                cout<<"Enter choice from the options given"<<endl;
                break;

        }


    }while(1);
    return 0;
}