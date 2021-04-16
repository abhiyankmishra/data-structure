#include<iostream>
using namespace std;
int main()
  {
      cout<<"array limit:";
      int n; 
      cin>>n;
       int array[n];
      

       for(int i=0;i<n;i++)
       {
           cout<<"array["<<i<<"]:";
           cin>>array[i];

       }
       int maxi=array[0];
       for(int i=1;i<n;i++)
       {
           maxi=max(maxi,array[i]);
           cout<<"MAXIMUM NUMBER TILL["<<i<<"]:"<<maxi<<endl;
       }}