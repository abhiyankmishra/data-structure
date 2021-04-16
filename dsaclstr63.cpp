// solved on geeks for geeks********************  
#include <iostream>
using namespace std;

void printsubstr(string s,int l,int h)
{for(int i=l;i<=h;i++)
{
     cout<<s[i];

}}
void longestpalsubstr(string s)
{

int end=1;
int start=0;
int  h;
int l;
    for(int i=1;i<s.length();i++)
    {
        //  for even substring
        l=i-1;
  h=i;
while( l>=0 && h<s.length() && s[l]==s[h])
{

    if(h-l+1>end)
    {
       start=l;
       end=h-l+1;
    }
l--;
h++;

}
   //  for odd substring
        l=i-1;
  h=i+1;
while( l>=0 && h<s.length() && s[l]==s[h])
{

    if(h-l+1>end)
    {
       start=l;
       end=h-l+1;
    }
l--;
h++;

}

}
printsubstr(s,start,start+end-1);
}


int main() {
int t;
 cin>>t;
 while( t--)
 {
     string s;
     cin>>s;
     longestpalsubstr(s);
    
     cout<<endl;
     
 }
	return 0;
}