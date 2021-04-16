#include "bits/stdc++.h"
using namespace std;

int kadanes(int arr[],int n)
{
int maxsum=INT_MIN;
int currsum=0;

for(int i=0;i<n;i++)
{
currsum+=arr[i];
if(currsum<0)
{
currsum=0;
}
maxsum=max(maxsum,currsum);
}
return maxsum;
}

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
       int wrapsum;
       int nonwrapsum;
       int totalsum=0; 
   
nonwrapsum=kadanes(a,n);

for(int i=0;i<n;i++)
{totalsum+=a[i];
    a[i]=-a[i];

}
wrapsum=totalsum + kadanes(a,n);
cout<<max(wrapsum,nonwrapsum);
return 0;
  }
