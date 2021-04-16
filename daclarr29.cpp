// this is solved using nlogn time  complexity
// a better solution is also there of o(n) time complexity 


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
       for (int i=1;i<n;i++)
       {
         
         int current =array[i];
         int j=i-1;
         while(array[j]>current && j>=0)
         {
             array[j+1]=array[j];
             j--;
         }
         array[j+1]=current;

       }
     
     
int count=1;
int maxi=1;
int check=array[0];

for(int i=1;i<n;i++)
{
     if(array[i]==check+1)
     {
         count++;
         check=array[i];
         
     }
     else{
         count=1;
         check=array[i];
     }
     maxi=max(count,maxi);
}


     
     cout<<count;
      }