#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   getline(cin,str);
   //   inbuild function of cpp from lower to upper :
 


transform(str.begin(),str.end(),str.begin(), ::toupper);
cout<<str;

// *********************
   //   inbuild function of cpp from upper to lower :



transform(str.begin(),str.end(),str.begin(), ::tolower);
cout<<str;

// *********************
   int ch;
   cout<<"press 1 for lower to upper and 2 for vice versa";
   cin>>ch;
   switch(ch){
   case 1:


//   convert from lower to upper:
   for(int i=0;i<str.length();i++)
   {
        if(str[i]>='a' || str[i]<='z')
        {
             str[i]-=32;
        }
   }
   
   break;
   case 2:
   
   for(int i=0;i<str.length();i++)
   //   convert from upper to lower :
   {
        if(str[i]>='A' || str[i]<='Z')
        {
             str[i]+=32;
        }
   }
   default:
   cout<<"error";
}
    cout<<str;

}