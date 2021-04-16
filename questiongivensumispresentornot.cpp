#include<iostream>
using namespace std;
int main()
  {
      cout<<"array limit:";
      int n; 
      cin>>n;
       int a[n+1];
       a[n]=-1;

      

       for(int i=0;i<n;i++)
       {
           cout<<"array["<<i<<"]:";
           cin>>a[i];

       }
  
int k ;
cin>>k;

for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if((a[i]+a[j])==k)
        {
            cout<<"found on :"<<i<<","<<j;
            return 0;
        }
    }
}
 cout<<"not found";
  }