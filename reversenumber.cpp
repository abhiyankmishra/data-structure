#include<iostream>
using namespace std;
int main()
{
    cout<<"enter number to reverse:";
    int n;
     cin>>n;
     int rev=0;
    while(n)
    {int r=n%10;
    rev=(rev*10)+r;
    n=n/10  ;        
    }
    cout<<"reversed number is :"<<rev;
}