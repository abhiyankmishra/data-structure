#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2,resstr;
    cin>>str1>>str2>>resstr;
    int l1=str1.length();
    int l2=str2.length();
    int l3=resstr.length();
    int count1=0,count2=0;
if(l1+l2!=l3){
    cout<<"false ";
    return 0;
}
else{
     for(int i=0;i<l3;i++)
     {
         if(resstr[i]==str1[count1])
         {
             count1++;
         }
         else if(resstr[i]==str2[count2])
         {
        count2++;
         }
        
     }
}
if(count1+count2==l3)
{
    cout<<"valid shuffle";
}
else
{
    cout<<"not a valid shuffle";
}
}