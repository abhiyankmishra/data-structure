#include "bits/stdc++.h"
using namespace std;
int main()
  {
      cout<<"array limit:";
      int n; 
      cin>>n;
       int a[n];


      

       for(int i=0;i<n;i++)
       {
           cout<<"array["<<i<<"]:";
           cin>>a[i];

       }
       int x=0;
       int sum=0;
       int res=0;
  while(x<n)
  {
      for(int i=x;i<n;i++)
      {cout<<"[";
      sum=0;
          for(int j=x;j<=i;j++)
          {
              cout<<a[j]<<" ";
          }
          cout<<"]"<<endl;
          res=max(sum,res);
      }
  x++;}
  cout<<res;
  }