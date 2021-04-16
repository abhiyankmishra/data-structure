#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter limit";
    cin>>n;
    
    int arr[n];
 
        for(int i=0;i<n;i++)
    {cout<<"array["<<i<<"]:";
           cin>>arr[i];}

           int l;
    cout<<"enter limit";
    cin>>l;
    
    int arr2[l];
 
        for(int i=0;i<n;i++)
    {cout<<"array2["<<i<<"]:";
           cin>>arr2[i];}

        




                 int i=0,j=0;
           while(i<n && j<n)
           {
               if(arr[i]<arr2[j])
               {
                 
                 i++;
               }
                else if(arr2[j]<arr[i])
                {
                    j++;
                }
                else if(arr2[j]==arr[i])
                {
                    cout<<arr2[j];
                    j++;
                    i++;
                }

           }




}