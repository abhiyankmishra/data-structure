/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
// #include<stacks>
using namespace std;

void reverse(string s)
{
    stack <string> st;
    
    for(int i=0;i<s.length();i++)
    {
        string word="";
        
        while(s[i]!=' ' && i!=s.length())
        {
            word+=s[i];
            i++;
        }
        
        st.push(word);
    }
  
    while(!st.empty())
    {
    
        cout<<st.top()<<" ";
        st.pop();
        
        
       
    }
    
    
}

int main()
{
    string s="hey how are you doing?";
    reverse(s);
   
    return 0;
}
