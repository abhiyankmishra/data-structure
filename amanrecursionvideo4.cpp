
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void permutation(string s,string ans){
    if(s.length()==0)
     {
         cout<<ans<<endl;
         return;
    }
    
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        
        permutation(ros,ans+ch);
        
    }
}
int countpath(int s,int e)
{if(s==e)
{
     return 1;
}
 if(s>e)
{
     return 0;
     
}    

int count=0;
for(int i=1;i<=6;i++)
{
    count+=countpath(s+i,e); 
}
return count ;
}
int countmaze(int n,int i,int j)
{
      if(i==n-1 && j==n-1)
      {
           return 1;
      }
      if(i>n-1 || j>n-1)
      {
           return 0;
      }
      
      return countmaze(n,i+1,j)+countmaze(n,i,j+1);
}
int tilingprob(int n)
{
    if(n==0)
    {
        return 0; 
    }
    
    if(n==1)
    {
        return 1;
    }
    
    return tilingprob(n-1)+tilingprob(n-2);
}
int friendspairing(int n)
{
     if(n==0 ||n==1 ||n==2)
     {
         return n;
     }
     
     return friendspairing(n-1)+friendspairing(n-2)*(n-1);
}
int knapsack(int value[], int wt[],int n,int W)
{if(W==0 || n==0)
{
    return 0;
}

if(wt[n-1]>W)
{
    return knapsack(value,wt,n-1,W);
}
     return max(knapsack(value,wt,n-1,W),knapsack(value,wt,n-1,W-wt[n-1])+value[n-1]);
}





int main()
{
    int wt[3]={10,20,30};
    int value[3]={100,50,150};
    int W=50;
    cout<<knapsack(value,wt,3,W);
    // cout<<friendspairing(4);
//  cout<<tilingprob(4);   
// cout<<countpath(0,3);
    // permutation("ABC","");
//  cout<<countmaze(3,0,0);
    return 0;
}
