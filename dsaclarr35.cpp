#include "bits/stdc++.h"


using namespace std;




int chocdis(int a[],int n,int m)
{
    if(n==0 || m==0)
    {
        return 0;
    }
    if(m>n){
        return -1;
    }

sort(a,a+n);

int first=0;
int last =0;
int mindiff=INT_MAX;
for(int i=0;i+m-1<n;i++)
{
    int diff=a[i+m-1]-a[i];
    if(diff<mindiff)
    {
        mindiff=diff;
        first=i;
        last=i+m-1;
    }
}
return a[last]-a[first] ; 

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
       int m;
        cout<<"enter no. of choc. packs";
        cin>>m;
       int res=chocdis(arr,n,m);
       if(res==-1)
       {
           cout<<"invalid entries";

       }
       else{
           cout<<res;
       }
       }
