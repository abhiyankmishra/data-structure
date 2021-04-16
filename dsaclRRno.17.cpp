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

           int m;
    cout<<"enter limit";
    cin>>m;
    
    int arr2[m];
 
        for(int i=0;i<m;i++)
    {cout<<"array2["<<i<<"]:";
           cin>>arr2[i];}

        




                 int i=0,j=0;
           while(i<n || j<m)
           {
               if(arr[i]<arr2[j])
               {
                 cout<<arr[i];
                 i++;
               }
                else if(arr2[j]<arr[i])
                {  
                    cout<<arr2[j];
                    j++;
                }
                else if(arr2[j]==arr[i])
                {
                    cout<<arr2[j];
                    cout<<arr[i];
                    j++;
                    i++;
                }

           }




}