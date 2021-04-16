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
           for(int j=0;j<n-i;j++)
           {
               if(array[j]>array[j+1])
               {
                   int temp=array[j];
                   array[j]=array[j+1];
                   array[j+1]=temp;

               }
               else
               {
                   continue;
               }
               
               
           }
       }
     
     for(int i=0;i<n;i++)
       {
           cout<<"array["<<i<<"]:"<<array[i]<<endl;
           
       } }