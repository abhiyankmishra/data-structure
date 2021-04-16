// sieve of eratosthenes

#include<bits/stdc++.h>
using namespace std;

void primesieve(int n)
{
    int prime[100]={0};
    for(int i=2;i<=n;i++)
    {if(prime[i]==0){
        for(int j=i*i;j<=n;j+=i)
        {
            prime[j]=1;
        }}
        
    }
    
    for(int i=2;i<n;i++)
    {if(prime[i]==0){
    cout<<i<<" ";}}

}

void primefactor(int n)
{
      int prime[100]={0};
      for(int i=2;i<n;i++)
      {
           prime[i]=i;
      }
      for(int i=2;i<=n;i++)
      {
           if(prime[i]==i)
           {for(int j=i*i;j<=n;j+=i)
               {
                   if(prime[j]==j)
                   {
                       prime[j]=i;
                   }
               }
           }
      }
      
      while(n!=1)
      {
          cout<<prime[n]<<" ";
          n=n/prime[n];}
      
}


int main()
{    int n;
    cin>>n;
    // primesieve(n);
    primefactor(n);
}