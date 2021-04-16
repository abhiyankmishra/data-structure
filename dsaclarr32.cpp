#include<iostream>
#include<limits>
 using namespace std;

 int binarysearch(int array[],int l,int r,int key)
 { if(l<=r)
 {
     int mid=(l+r)/2;
     if(array[mid]==key)
     {
         return mid; 
     }
     if(array[mid]>key)
     {
         return binarysearch(array,l,mid-1,key);
     }

     return binarysearch(array,mid+1,r,key);
 }
 return -1; 

 }
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
    //   sorting main array by insertion sort
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
    //   sorting done
      cout<<"subarray limit:";
      int n2; 
      cin>>n2;
      int array2[n2];
      

      for(int i=0;i<n2;i++)
      {
          cout<<"array2["<<i<<"]:";
          cin>>array2[i];

      }
if(n2>n)
{cout<<"given subarray length is greater than main array so can't be compared ";
    return 0; 
}
      for(int i=0;i<n2;i++)
      {
          int res=binarysearch(array,0,n-1,array2[i]);
          if(res==-1)
          {
              cout<<"not a subarray";
              return 0;
          }
          else{
                continue;              
          }

      }


cout<<"true";

  }
