#include<iostream>
using namespace std;

int main()
{
    int n;;
    cout<<"enter limit";
    cin>>n;
    
    char array[n+1];

 
       cin>>array;
       cout<<array;

for(int i=0;i<n;i++)
    {
        if(array[i]!=array[n-1-i])
        {
            cout<<"not a palindrome";
            return 0;   }
    }
    
    cout<<"it ia a palindrome";
}