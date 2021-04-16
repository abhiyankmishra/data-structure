#include "bits/stdc++.h"

using namespace std;
int main()
  {
      cout<<"array limit:";
      int n; 
      cin>>n;
       int arr[n];
      

       for(int i=0;i<n;i++)
       {
           cout<<"array["<<i<<"]:";
           cin>>arr[i];
       }
  int  minprice =INT_MAX;
  int maxpro=0;
  for (int i=0;i<n;i++)
  {
      minprice=min(minprice,arr[i]);
      maxpro=max(maxpro,arr[i]-minprice); 
  }
  cout<<maxpro;
  
  }