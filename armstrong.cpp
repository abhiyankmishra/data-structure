#include<iostream>
using namespace std;
int main()
{
    cout<<"enter number to check:";
    int n;
     cin>>n;
     int temp=n;
     int rev=0;
    while(n)
    {int r=n%10;
    rev=rev+(r*r*r);
    n=n/10  ;        
    }
    if(temp==rev){
    cout<<"yes";}
    else
    {
        cout<<"no";
    }
}