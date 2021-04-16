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
       int chksz=1e6+2;
     bool check[chksz];

     for(int i=0;i<chksz;i++)
       {
         check[i]=false;

       }
      for(int i=0;i<n;i++)
       {
         if(a[i]>=0)
         {
             check[a[i]]=true;
         }
        
       }  

       for(int i=0;i<chksz;i++)
       {
         if(check[i]==false)
         {
             cout<<"smallest missing number is:"<<i<<endl;
             return 0;
         }


       }
 
  }
