#include<bits/stdc++.h>
using namespace std;
void allsub(string t,int i,int n,string s)
{
    if(i==n)
    {
        cout<<t<<endl;

    }
    else
    {
        allsub(t,i+1,n,s);
        t=t+s[i];
        
        
    }
    
}


int main()
{
string s;
 cin>>s;
 allsub("",0,s.length(),s)

}