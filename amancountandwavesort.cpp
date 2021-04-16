/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void dnfsort(int a[],int n)
{
     int low=0,mid=0,high=n-1;
     while(mid<high)
     {
         if(a[mid]==1)
         {
             mid++;
         }
         else if(a[mid]==2)
         {
            swap(a[mid],a[high]);
            high--;
            
         }
         else
         {
             swap(a[mid],a[low]);
            mid++;
            low++;
         }
         
         
     }
}
void wavesort(int a[],int n)

{
     for(int i=1;i<n;i+=2)
     {
        if(a[i]>a[i-1])
        {
            swap(a[i],a[i-1]);
        }
        
        if(i<n-1 && a[i]>a[i+1] )
        {
            swap(a[i],a[i+1]);
        }
        
        
     }
}
int main()
{
    int a[]={1,3,4,7,5,6,2};
    wavesort(a,7);
    for(int i=0;i<7;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
