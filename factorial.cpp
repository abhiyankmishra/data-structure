#include<iostream>
using namespace std;
int main()
{
    cout<<"enter number to check:";
    int n;
     cin>>n;
     
     int fact=1;
     for(int i=2;i<=n;i++)
     { 
         fact=fact*i;
     }
     cout<<"fact is:"<<fact;
     
     }
