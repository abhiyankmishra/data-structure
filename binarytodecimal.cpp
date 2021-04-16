#include<bits/stdc++.h>
using namespace std;
int binarytodecimal(int n)
{
    int res=0;
    int pow=1;
    while(n>0)
    {int r=n%10;
    res+=r*pow;
    n=n/10;
    pow*=2;
        
    }
    return res;
}

int octaltodecimal(int n)
{
    int res=0;
    int pow=1;
    while(n>0)
    {int r=n%10;
    res+=r*pow;
    n=n/10;
    pow*=8;
        
    }
    return res;
}

int hexatodecimal(string n)
{
    int pow=1;
    int res=0;
    int l=n.size();
    for(int i =l-1;i>=0;i++)
    {
       if(n[i]>='0' && n[i]<='9')
       {
           res+=pow*(n[i]-'0');
       }

       else if(n[i]>='A' && n[i]<='F')
       {
         res+=pow*(n[i]-'A'+10);

       }
       pow*=16;
    }
    return res;
}

 int main()
 {
     cout<<"ENTER hexaDECIMAL  NO:";
     string n;
     cin>>n;
     int ans=hexatodecimal(n);
     cout<<"ANSWER IS:"<<ans;
 }