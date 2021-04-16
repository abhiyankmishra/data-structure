#include "bits/stdc++.h"
using namespace std;
int main()
  {
      cout<<"array limit:";
      int n; 
      cin>>n;
       int array[n];
       int key;
    cout<<"enter key";
    cin>>key;

       for(int i=0;i<n;i++)
       {
           cout<<"array["<<i<<"]:";
           cin>>array[i];

       }
  
  int n2=100000;
  int check[n2];
  fill(check,check+n2,0);
  for(int i=0;i<n;i++)
  {
      check[array[i]]=check[array[i]]+1;
  }

for(int i=0;i<n;i++)
{
    if(check[array[i]]>(n/key))
    {
        cout<<array[i]<<" ";
    }
}

  
  }