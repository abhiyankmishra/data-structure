#include "bits/stdc++.h"


 using namespace std;
  int main()
  {
      cout<<"array limit:";
      int n; 
      cin>>n;
       int array[n];
int chksz=1e6+2;
 bool chkarr[chksz];
 for(int i=0;i<chksz;i++)
 {
     chkarr[i]=false;
 }
      

       for(int i=0;i<n;i++)
       {
           cout<<"array["<<i<<"]:";
           cin>>array[i];
           chkarr[array[i]]=true;

       }
  int count=0;
   int key;
   cout<<"enter kth smallest number element";
   cin>>key;
  for(int i=0;i<chksz;i++)
 {
     if(chkarr[i]!=false)
     {
         

        
             count++;
        
         if(count==key)
         {
             cout<<"given element is"<<i<<endl;
             return 0; 
         }
     }
 }
  
  }