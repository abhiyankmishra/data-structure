/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
void countsort(int a[],int n)
{
     int k=a[0];
     for(int i=0;i<n;i++)
     {
         k=max(a[i],k);
     }
     
     int count[k+1];
     fill(count,count+k+1,0);
     
     for(int i=0;i<n;i++)
     {
         count[a[i]]++;
     }
     
     for(int i=1;i<=k;i++)
     {
         count[i]+=count[i-1];
     }
     
     
     int output[n];
     for(int i=n-1;i>=0;i--)
     {
         output[--count[a[i]]]=a[i];
         
     }
     for(int i=0;i<n;i++)
     {
          a[i]=output[i];
}}
int main()
{
    int a[]={5,4,3,2,2,1,1};
    
    countsort(a,7);
for(int i=0;i<7;i++)
{
cout<<a[i]<<" ";     
}
    return 0;
}
