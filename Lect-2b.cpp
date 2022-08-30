//Array of objects

#include<iostream>
using namespace std;
class student
{
    string name;
    int regno;
public:
    void getdetails();
    void printdetails();
};
void student::getdetails()
{
    cout<<"Enter name:\n";
    cin>>name;
    cout<<"Enter reg.no:\n";
    cin>>regno;
}
void student::printdetails()
{
    cout<<name<<"\t"<<regno<<"\n";
} 
int main()
{
    student stu[10];
    int n;
    cout<<"Enter number of students:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter details of student"<<i+1<<"\n";
        stu[i].getdetails();
    }
    cout<<"Student Details"<<"\n"<<"Name"<<"Reg.no\n";
    for(int i=0;i<n;i++)
    {
        stu[i].printdetails();
    }
    return 0;
}