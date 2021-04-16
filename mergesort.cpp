#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)
{int i=l;
int j=m+1;
int k=l;
int temp[r+1];

while(i<=m && j<=r)
{
    if(arr[i]<arr[j])
   { temp[k]=arr[i];
    i++;
    k++;}

    else if(arr[i]>arr[j])
   { temp[k]=arr[j];
    j++;
    k++;}

}

while(i<=m)
{
    temp[k]=arr[i];
    i++;
    k++;
}
while(j<=r)
{
    temp[k]=arr[j];
    j++;
    k++;
}

for(int z=l;z<=r;z++)
{
    arr[z]=temp[z];
}



}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);

        merge(arr,l,m,r);
        
    }
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

 cout<<"before merge sort"<<endl;;
       for(int i=0;i<n;i++)
       {
           cout<<arr[i]<<" ";
           

       }
cout<<endl;`
       mergesort(arr,0,n-1);
      
cout<<"after merge sort"<<endl;
         for(int i=0;i<n;i++)
       {
           cout<<arr[i]<<" ";
           

       }
  }