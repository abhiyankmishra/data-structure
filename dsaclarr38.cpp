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
int key;
 cin>>key;

int good=0;
 for(int i=0;i<n;i++)
 {if(arr[i]<=key)
 {
      good++;
 }
 }  
 int mi=INT_MAX;
int bad=0;
for(int i=0;i<good;i++)
{if(arr[i]>key)
{
    bad++;
}}

int i=0,j=good-1;
while(j<n)
{mi=min(mi,bad);
j++;
if(j<n && arr[j]>key)
{
    bad++;
}



else if(arr[i]>key)
{
    bad--;
}
i++;

}

cout<<bad;

}


    
