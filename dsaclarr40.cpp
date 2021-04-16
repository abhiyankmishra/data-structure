#include "bits/stdc++.h"
using namespace std;
int main()
    {
      cout<<"arr limit:";
      int n; 
      cin>>n;
       int arr[n];
      

       for(int i=0;i<n;i++)
       {
           cout<<"arr["<<i<<"]:";
           cin>>arr[i];
   
       }

       cout<<"brr limit:";
      int m; 
      cin>>m;
       int brr[m];
      

       for(int i=0;i<m;i++)
       {
           cout<<"brr["<<i<<"]:";
           cin>>brr[i];
   
       }

int begin1=0,end1=n;
while(begin1<=end1)
{
    int i1=(begin1+end1)/2;
    int i2=(n+m+1)/2-i1;

    int min1=(i1==n) ? INT_MAX : arr[i1];
     int max1=(i1==0) ? INT_MAX : arr[i1-1];


    int min2=(i2==m) ? INT_MAX : brr[i2];
     int max2=(i2==0) ? INT_MAX : brr[i2-1];

if((max1<=min2) && (max2<=min1))
{
    if((n+m)%2==0)
    {
      cout<<((double) (max(max1,max2)+min(min1,min2))/2);
    }
    else{
        cout<<((double)max(max1,max2));
    }
}
else if(max1>min2)
{
    end1=i1-1;
}
else{
    begin1=i1+1;
}




}







       }
