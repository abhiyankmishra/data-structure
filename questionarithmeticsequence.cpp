#include<iostream>
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
  
  int pd=  a[1]-a[0];
  int ans=2;
  int curr=2;
  int j=2;
  while(j<n)
  {
      if(pd==a[j]-a[j-1])
      {
          curr++;
      }
      else 
      {pd=a[j]-a[j-1];
          curr=2;
      }
      ans=max(ans,curr);
      j++;

  }

  cout<<"longest arithmetic array is of length:"<<ans;
  }


