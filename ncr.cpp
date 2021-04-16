#include<iostream>
using namespace std;

int fac(int n)
{
  
     int fact=1;
     for(int i=2;i<=n;i++)
     { 
         fact=fact*i;
     }
     return fact;
}

int main()
{
      cout<<"enter n and r :";
       int  n,r;
       cin>>n>>r;
       int ans=fac(n)/(fac(r)*fac(n-r));
       cout<<"answeer is|:"<<ans<<endl;
     }
