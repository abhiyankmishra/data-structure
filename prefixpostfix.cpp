/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int prefixeval(string s)
{
     stack<int> st;
     for(int i=s.length()-1;i>=0;i--)
     {
        if(s[i]>='0' &&s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        
        else
        {int top1=st.top();
        st.pop();
        int top2=st.top();
        st.pop();
        
        switch(s[i]){
            case '+':
            st.push(top1+top2);
            break;
        
            case '-':
            st.push(top1-top2);
            break;
        
            case '*':
            st.push(top1*top2);
            break;
        
            case '/':
            st.push(top1/top2);
            break;
        
            case '^':
            st.push(pow(top1,top2));
            break;
            
        }
        
        }
        
        
        
        
     }
     
     return st.top();
}

int postfixeval(string s)
{
     stack<int> st;
     for(int i=0;i<s.length();i++)
     {
        if(s[i]>='0' &&s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        
        else
        {int top2=st.top();
        st.pop();
        int top1=st.top();
        st.pop();
        
        switch(s[i]){
            case '+':
            st.push(top1+top2);
            break;
        
            case '-':
            st.push(top1-top2);
            break;
        
            case '*':
            st.push(top1*top2);
            break;
        
            case '/':
            st.push(top1/top2);
            break;
        
            case '^':
            st.push(pow(top1,top2));
            break;
            
        }
        
        }
        
        
        
        
     }
     
     return st.top();
}
int main()
{
    cout<<prefixeval("-+7*45+20");
     cout<<postfixeval("46+2/5*7+");
    }