//Array within class

#include<iostream>
using namespace std;
class student
{
    string coursecode[5];
    int marks[5];
    int num_course;
public:
    void course_count()
    {
        num_course=0;
    }
    void getdetails();
    void total();
    void printdetails();
    void modifymark();
};
void student::getdetails()
{
    cout<<"Enter course code:"<<"\n";
    cin>>coursecode[num_course];
    cout<<"Enter mark:\n";
    cin>>marks[num_course];
    num_course++;
}
void student::total()
{
    int sum=0;
    for(int i=0;i<num_course;i++)
    {
        sum=sum+marks[i];
    }
    cout<<"Total Marks:"<<sum<<"\n";
}
void student::printdetails()
{
    cout<<"Student Report\n";
    for(int i=0;i<num_course;i++)
    {
        cout<<"Subject"<<i+1<<"\t"<<coursecode[i];
        cout<<"\t"<<marks[i]<<"\n";
    }
}
void student::modifymark()
{
    string code;
    int newmark;
    cout<<"Enter course code to modify:";
    cin>>code;
    cout<<"Enter new marks";
    cin>>newmark;
    for(int i=0;i<num_course;i++)
    {
        if(coursecode[i]==code)
        {
            marks[i]=newmark;
        }
    }

}
int main()
{
    student stu1;
    stu1.course_count();
    int choice;
    do
    {
        cout<<"\nEnter your choice:\n1. Add course\n2.Display total marks\n";
        cout<<"3.Modify\n4.Display all\nPress any other key to exit\n";
        cin>>choice;
        switch(choice)
        {
        case 1:
            stu1.getdetails();
            break;
        case2:
            stu1.total();
            break;
        case 3:
            stu1.modifymark();
            break;
        case 4:
            stu1.printdetails();
            break;    
        default:
            exit(0);
        }
    }
    while(1);
    return 0;
}
