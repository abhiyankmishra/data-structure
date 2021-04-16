#include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"enter limit";
    cin>>n1;
     
    int arr[n1];
 
        for(int i=0;i<n1;i++)
    {cout<<"array["<<i<<"]:";
           cin>>arr[i];}

       int n2;
    cout<<"enter limit";
    cin>>n2;
     
    int arr2[n2];
 
        for(int i=0;i<n2;i++)
    {cout<<"array["<<i<<"]:";
           cin>>arr2[i];}

                int n3;
    cout<<"enter limit";
    cin>>n3;
     
    int arr3[n3];
 
        for(int i=0;i<n3;i++)
    {cout<<"array["<<i<<"]:";
           cin>>arr3[i];}

        




                 int i=0,j=0,k=0;
           while(i<n1 && j<n2 && k<n3)
           {     
                if(arr[i]==arr2[j]==arr3[k])
                {
                    cout<<arr[i]<<" ";
                    i++;
                    j++;
                    k++;
                }
 
             else if(arr[i]<arr2[j])
               {
                 
                 i++;
               }
                else if(arr2[j]<arr3[k])
                {
                    
                    j++;
                }
                else
                {
                    k++;
                }

           }




}