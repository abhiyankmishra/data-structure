
#include <iostream>

using namespace std;

bool issafe(int** a,int x,int y,int n)
{
  for(int row=0;row<x;row++)
  {
      if(a[row][y]==1)
      {
          return false;
      }
  }
  
  
  itn row=x;
  int col=y;
  while(row>=0 && col>=0)
  {
      if(a[row][col]==1)
      {
          return false;
      }
      row--;
      col--;
      
  }
  
  
   row=x;
   col=y;
  while(row>=0 && col<n)
  {
      if(a[row][col]==1)
      {
          return false;
      }
      row--;
      col++;
      
  }
  
  return true;
}

bool nqueen(int** a,int x,int n)
{
    if(x>=n)
    {
        return true;
    }
    for(int col=0;col<n;col++)
    {
        if(issafe(arr,x,col,n))
        {
            arr[x][col]==1;
            
            
            if(nqueen(a,x+1,n))
            {
                return true;
            }
            a[x][col]=0;
        }
    }
    return false;
}

int main()

{int n;
 cin>>n;
 
    int** a=new int*[n];
for(int i=0;i<n;i++)
{
    a[i]=new int[n];
    for(int j=0;j<n;j++)
    {
        a[i][j]=0;
    }
    
}
if(nqueen(a,0,n))
    // cout<<"Hello World";
for(int i=0;i<n;i++)
{
    
    for(int j=0;j<n;j++)
    {
        cout<<a[i][j];
    }cout<<endl;
    
}
    return 0;
}
