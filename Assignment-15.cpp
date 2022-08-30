#include<iostream>
using namespace std;

class person
{
    string BMIcategory;
    float W,H,bmi;
public:
    person(float a, float b);
    void Findbmi(float a, float b);
};
person::person(float a, float b)
{
    W=a;
    H=b;
}

void person::Findbmi(float a, float b)
{
    bmi=a/(b*b*0.025*0.025);
    if(bmi<18.5)
    {
        cout<<"under weight";
    }
    else if(bmi>=18.5 && bmi<=24.9)
    {
        cout<<"Normal weight";
    }
    else if(bmi>=25 && bmi<=29.9)
    {
        cout<<"over weight";
    }
    else if(bmi>=30)
    {
        cout<<"obseity";
    }

}

int main()
{
    float weight,height;
    cin>>weight;
    cin>>height;
    person BMI(weight,height);
    BMI.Findbmi(weight,height);
return 0;
}