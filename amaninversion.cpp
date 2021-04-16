/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
long long merge(int arr[],int l,int mid,int r)
{long long inv=0;
    int n1=mid-l+1;
    int n2=r-mid;
    
    int a[n1];
    int b[n2];
    
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }
int i=0;
int j=0;
int k=l;
while(i<n1 && j<n2)
{
    if(a[i]<b[j])
    {
        arr[k]=a[i];
        i++;
        k++;
    }
    
    else if(a[i]>b[j])
    {
        arr[k]=b[j];
        inv+=n1-i;
        j++;
        k++;
    }
    
    else if(a[i]==b[j])
    {
        arr[k]=a[i];
        i++;
        k++;
        arr[k]=b[j];
        j++;
        k++;
    }
    
}

while(i<n1)
{
    arr[k]=a[i];
    k++;
    i++;
}

while(j<n2)
{
    arr[k]=b[j];
    k++;
    j++;
}

    
return inv;
}
long long mergesort(int arr[],int l,int r)
{long long inv=0;
    if(l<r)
{
    int mid=(l+r)/2;
    inv+=mergesort(arr,l,mid);
    inv+=mergesort(arr,mid+1,r);
    inv+=merge(arr,l,mid,r);
    
}   
return inv;    
}


int main()
{
    int arr[]={3,2,1};
    cout<<mergesort(arr,0,2);
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i];
    // }
    // cout<<endl;

    return 0;
}
