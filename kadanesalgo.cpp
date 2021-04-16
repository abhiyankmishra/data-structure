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

int maxi=INT_MIN;
int currsum=0;
for(int i=0;i<n;i++)
{
    currsum+=a[i];
    if(currsum<0)
    {
        currsum=0;
    }
    maxi=max(currsum,maxi);
}
cout<<"max sum is:"<<maxi<<endl;

       }     