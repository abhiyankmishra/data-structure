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
       cout<<"enter key";
       int key;
       cin>>key;

       
             
     int res=binarysearch(array,0,n-1,key);
     if(res==-1)
     {cout<<"given key not found" <<endl;}
     else{
              cout<<"given key found at index:["<<res<<"]"<<endl;


     }




  }
