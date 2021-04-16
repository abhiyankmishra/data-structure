#include<iostream>
using namespace std;
int* orderingarray(int array[],int n)
{   for (int i=1;i<n;i++)
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
       
       return array;
       }
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

int* a=orderingarray(arr,n);

int k;
cout<<"enter value to find it's sum";
cin>>k;
  int low=0;
  int high=n-1;
  while(low<high)
  {
      if((a[low]+a[high])==k)
      {
            cout<<"found at: "<<low<<" "<<high<<endl;
            return 0;

      }
       else if((a[low]+a[high])<k)
      {
            low++;

      }
       else 
      {
            high--;

      }
  }
  
  cout<<"not found";
  }