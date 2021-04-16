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

int last=arr[n-1];
for(int i=n-1;i>=0;i--)
{
    arr[i]=arr[i-1];

}
arr[0]=last;
 for(int i=0;i<n;i++)
    {cout<<arr[i]<<" ";
           }
}