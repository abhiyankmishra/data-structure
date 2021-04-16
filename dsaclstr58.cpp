#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
cout<<"enter string:  ";
cin>>str;
int chk[26];
fill(chk,chk+26,0);

int n=str.length();
for(int i=0;i<n;i++)
{
    
    chk[str[i]-'a']++;

}
char dup;
for(int i=0;i<26;i++)
{
    if (chk[i]>1)
    {
        dup=i+'a';
cout<<dup<<": is duplicate"<<" "<<endl;
    }

}}