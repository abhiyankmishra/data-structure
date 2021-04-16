#include "bits/stdc++.h"
int threepar(int a[],int n,int lowval,int highval)
{
    int start=0,end=n-1;
    for(int i=0;i<n;)
    {
         if(a[i]<lowval)
         {
            swap(a[i],a[start++]);
         }
         else if(a[i]>highval)
         {
              swap(a[i],a[end--]);
         }
         else{
             i++;
         }
    }
}

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


   int lowval,highval;
  cout<<"enter lowval";
   cin>>lowval;
  cout<<"enter highval";
   cin>>highval;

   threepar(arr,n,lowval,highval);
   for(int i=0;i<n;i++)
   {
        cout<<arr[i]<<" ";
   }
       }
