#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter limit";
    cin>>n;
    
    int arr[n];
 
        for(int i=0;i<n;i++)
    {cout<<"array["<<i<<"]:";
           cin>>arr[i];}
int count=0;
for(int i=0;i<n;i++)
{
    if(arr[i]<0)
    {
       int temp=arr[i];
       arr[i]=arr[count];
       arr[count]=temp;
       count++;
    
    }
}

for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
}