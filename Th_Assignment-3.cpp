#include<iostream> 
using namespace std;
template<class T>
void sort(T arr[], int SIZE) 
{ 
    for(int i=0;i<SIZE;i++) 
    {
        for(int j=i+1;j<SIZE;j++) 
        { 
            if(arr[i]>arr[j]) 
            {
                T temp;temp=arr[i]; 
                arr[i]=arr[j]; 
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int num;
    cout<<"Enter total numbers to enter:"<<endl; 
    cin>>num;
    int int_array[num]; 
    cout << "Enter elements:"<<endl; 
    for (int i=0;i<num;i++) 
    {
        cin>>int_array[i];
    }
    sort(int_array, num); 
    cout<<"After sorting the numbers are :"<<endl; 
    for (int i=0;i<num;i++)
    {
        cout<<int_array[i]<<" ";
    }
    return 0;
}
