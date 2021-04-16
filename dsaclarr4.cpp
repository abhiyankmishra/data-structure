#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter limit";
    cin>>n;
    
    int arr[n];
   int one=0,two=0,zero=0;
        for(int i=0;i<n;i++)
    {cout<<"array["<<i<<"]:";
           cin>>arr[i];            
           if(arr[i]==0)
           {zero++;

           }
           else if(arr[i]==1)
           {one++;

           }
           else if(arr[i]==2)
           {two++;

           }
           }
           
           
  for(int i=0;i<n;i++)
  {
      if(i<zero)
      {
          arr[i]=0;
       
      }

      else if(i>=zero && i<zero+one)
      {
          arr[i]=1;
      }
      else if(i>=zero+one && i<zero+one+two)
      {
          arr[i]=2;
      }


      
  }       
   
    for(int i=0;i<n;i++)
      {
          cout<<arr[i];
      }
}
    
