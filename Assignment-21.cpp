#include<iostream>
using namespace std;
class Employee
{
    protected:
    double Basic_Pay;
    public:
    Employee()
    {
        
    }
    Employee(double a)
    {
        Basic_Pay=a;
    }
    virtual void print_details()
    {
        
    }
};
class ProjectManager:public Employee
{
    double AGP, DA, TA, HRA;
    public:
    ProjectManager(double a):Employee(a)
    {
        
    }
    double compute_salary()
    {
        AGP=0.2*Basic_Pay;
        DA=0.4*Basic_Pay;
        TA=5000;
        HRA=20000;
        return (AGP + DA + TA + HRA + Basic_Pay);
    }
    void print_details()
    {
        double TOTAL;
        TOTAL=compute_salary();
        cout<<"Type: "<<"Project Manager "<<"BP "<<Basic_Pay<<" AGP "<<AGP<<" DA "<<DA<<" TA "<<TA<<" HRA "<<HRA;
        cout<<" TOTAL "<<TOTAL<<endl;
    }
};
class System_Engineer:public Employee
{
    double TA, HRA;
    public:
    System_Engineer(double a):Employee(a)
    {
        
    }
    double compute_salary()
    {
        TA=5000;
        HRA=20000;
        return (TA + HRA + Basic_Pay);
    }
    void print_details()
    {
        double TOTAL;
        TOTAL=compute_salary();
        cout<<"Type: "<<"System Engineer "<<" BP"<<Basic_Pay<<" TA "<<TA<<" HRA "<<HRA;
        cout<<" TOTAL "<<TOTAL<<endl;
    }
};
class Technical_Assistant:public Employee
{
    double TA;
    public:
    Technical_Assistant(double a):Employee(a)
    {
        
    }
    double computesalary()
    {
        TA=5000;
        return (TA + Basic_Pay);
    }
    void print_details()
    {
        double TOTAL;
        TOTAL=computesalary();
        cout<<"Type: "<<"Technical Assistant "<<"BP "<<Basic_Pay<<" TA "<<TA;
        cout<<" TOTAL "<<TOTAL<<endl;
    }
};
int main()
{
    int n;
    cin>>n;
    Employee *e;
    for(int i=0;i<n;i++)
    {
        double pay;
        string etype;
        cin>>etype>>pay;
        
        if(etype=="PM")
        {
            ProjectManager pm(pay);
            e=&pm;
            e->print_details();
        }
        else if(etype=="SE")
        {
            System_Engineer se(pay);
            e=&se;
            e->print_details();
        }
        else
        {
            Technical_Assistant ta(pay);
            e=&ta;
            e->print_details();
        }
    }    
    return 0;
}

