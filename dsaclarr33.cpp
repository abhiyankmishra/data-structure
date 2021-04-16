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
 cout<<"enter key :";
 cin>>key;

for(int i=0;i<n-2;i++)
{
int l=i+1;
int r=n-1;
if(arr[i]+arr[l]+arr[r]==key)
{
cout<<"triplets are:"<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<" "<<endl;

return 0;}
}

  
  
  cout<<"triplets are not found ";}