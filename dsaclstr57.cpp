#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
cout<<"enter string:  ";
cin>>str;
string temp=str;


for(int i=0;i<(str.length()/2);i++)
{
    
    swap(str[i],str[str.length()-1-i]);

}
if(temp==str)
{
    cout<<"pallindrome";
}
else{
    cout<<"not pallindrome";}}                                                       