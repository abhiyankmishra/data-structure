#include<bits/stdc++.h>
using namespace std;
int main()
{
string str1,str2,temp;
cin>>str1;
cin>>str2;
temp=str1+str1;
if(str1.length()!=str2.length())
{
    cout<<"they cant be each others rotation because of length they have";
    return 0;

}
else{
    if(temp.find(str2)!=string::npos)
    {
        cout<<" they are rotation";
    }
    else{
        cout<<"they aRE NOT";
    }
}

}