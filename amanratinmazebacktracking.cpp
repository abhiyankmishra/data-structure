/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your cn jmnjkhbhbububububububub  ubuy ninin inininiuniunnun" button to compile and execute it.

*******************************************************************************/
      
#include <iostream>

using namespace std;
bool issafe(int** a,int x,int y,int n)
{
    if(x<n && y<n && a[x][y]==1)
    {
        return true;
    }
    return false;
}

bool ratinmaze(int** a,int x,int y,int n,int** sol)
{
    if(x==n-1 && y==n-1 )
    {
        sol[x][y]==1;
        return true;
    }
    
    if(issafe(a,x,y,n))
    {
        sol[x][y]==1;
        
        if(ratinmaze(a,x+1,y,n,sol))
        {
             return true;
        }
        
        if(ratinmaze(a,x,y+1,n,sol))
        {
             return true;
        }
        sol[x][y]==0;
        return false;
    }
     return false;
}
int main()
{int n;
 cin>>n;
  int** arr=new int*[n];
  for(int i=0;i<n;i++)
  {
       arr[i]=new int[n];
  }
    // cout<<"Hello World";
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   cout<<i<<j<<":";
            cin>>arr[i][j];
            cout<<"****"
        }
    }
 int** sol=new int*[n];
  for(int i=0;i<n;i++)
  {
       sol[i]=new int[n];
       for(int j=0;j<n;j++)
       {
           sol[i][j]==0;
       }
  }
  
if(ratinmaze(arr,0,0,n,sol))
    {
         for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }   
        
    }return 0;
}
