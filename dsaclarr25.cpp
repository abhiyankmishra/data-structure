#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter limit";
    cin>>n;
    
    int a[n];
 
        for(int i=0;i<n;i++)
    {cout<<"array["<<i<<"]:";
           cin>>a[i];}


int i=0;
int j=n-1;
while(i<=j)
{if(a[i]>=0 && a[j]<0)
{
    i++;
    j--;
}
else if(a[i]<0 && a[j]>=0)
{
    swap(a[i],a[j]);
    i++;
    j--;

}

else if(a[i]>=0)
{
    i++;
}
else if(a[j]<0)
{
    j--;
}}



if(i==n-1 ||  i==0)
{
    for(int i=0;i<n;i++)
    {cout<<a[i]<<" ";}
}
 else {
 int k=0;
 while(k<n && i<n)
 {
     swap(a[k],a[i]);
     k=k+2;
     i++;
 }
 for(int i=0;i<n;i++)
    {cout<<a[i]<<" ";}
 }
}