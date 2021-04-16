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
    //    int water=0;
    //    for(int i=1;i<n-1;i++)
    //    {              
    //        int lmax=arr[i];
    //        for(int x=0;x<i;x++)
    //        {
    //            lmax=max(lmax,arr[x]);
    //        }
    //        int rmax=arr[i];
    //        for(int y=i+1;y<n;y++)
    //        {
    //            int rmax=max(rmax,arr[y]);
    //        }
    //        water=water+(min(lmax,rmax))-arr[i];
    //    }
    //    cout<<water;
      
      
      int lmax[n];
        lmax[0]=arr[0];
       for(int i=1;i<n;i++)
       {
           int temp=max(arr[i],lmax[i-1]);
           lmax[i]=temp;
       }

             int rmax[n];
             rmax[n-1]=arr[n-1];
             for(int i=n-2;i>=0;i--)
             { int temp=max(arr[i],rmax[i+1]);
             rmax[i]=temp;}
int water=0;
for(int i=1;i<n-1;i++)
{
    water+=min(lmax[i],rmax[i])-arr[i];
}
cout<<water;
       } 