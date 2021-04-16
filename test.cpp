# include<bits/stdc++.h>
using namespace std;
int arr(int arr[],int n)
{
    int temp=arr[0];
    arr[0]=arr[n-1];
     arr[n-1]=temp;
     

}
 int main()
 {int n;
    cin>>n;
    int a[n];
     for(int i=0;i<n;i++)
     {
cin>>a[i];
     }
     arr(a,n);
     for(int i=0;i<n;i++)
     {
         cout<<a[i];
     }

 }