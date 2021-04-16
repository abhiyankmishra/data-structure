/******************************************************************************

                              some important recursion problems

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
void reverse(string s)
{
     if(s.length()==0)
     {
         return;
     }
     
     string ros=s.substr(1);
     reverse(ros);
     cout<<s[0];
     
}

void replacepi(string s)
{
     if(s.length()==0)
     {
         return ;
     }
     
     if(s[0]=='p' && s[1]=='i')
     {
         cout<<"3.14";
         replacepi(s.substr(2));
         
     }
     
     else
    {
         cout<<s[0];
         replacepi(s.substr(1));
         
     }
}
void towerofhanoi(int n,char src,char dest,char helper)
{
    if(n==0)
    {
        return;
    }
    
    towerofhanoi(n-1,src,helper,dest);
    cout<<"moving from  "<<src<<"  to  "<<dest<<endl;
    towerofhanoi(n-1,helper,dest,src);
}   
string moveallx(string s)
{
     if(s.length()==0)
     {
          return "";
     }
    
 char ch=s[0];
 string ans=moveallx(s.substr(1));
 if(ch=='x')
 {
      return ans+ch;
 }
 else{
     return ch+ans;
 }




    
}
string removedupli(string s)
{
     if(s.length()==0)
     {
          return "";
     }
     
     char ch=s[0];
     string ans=removedupli(s.substr(1));
     
     
     if(ch=ans[0])
     {
         return ans;
     }
     return (ch+ans);
}
void subsequence(string s,string ans)
{
     if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);


    subsequence(ros,ans);
    subsequence(ros,ans+ch);
    
}
void subsequence2(string s,string ans)
{
     if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);


    subsequence2(ros,ans);
    subsequence2(ros,ans+ch);
    subsequence2(ros,ans+to_string(code));
    
}

int main()
{
    //  towerofhanoi(3,'a','c','b');
    // cout<<removedupli("aaabbccdd")<<endl;
    // cout<<moveallx("xxabcdefxx")<<endl;
     subsequence2("AB","");
    return 0;
}
