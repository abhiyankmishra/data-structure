#include "bits/stdc++.h"


 using namespace std;
  int main()
  {
      cout<<"array limit:";
      int n; 
      cin>>n;
       int array[n];
      

       for(int i=0;i<n;i++)
       {
           cout<<"array["<<i<<"]:";
           cin>>array[i];

       }
  
  int maxi=INT_MIN;
  int mini=INT_MAX;

  for(int i=0;i<n;i++)
  {maxi=max(maxi,array[i]);
  mini=min(mini,array[i]);


  }

  cout<<maxi<<" "<<mini<<endl;

  }