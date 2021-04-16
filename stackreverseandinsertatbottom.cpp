#include<bits/stdc++.h> 
#include<iostream>
using namespace std; 
 stack<char> st; 
 string ns; 
char insert_at_bottom(char x) 
{ 
  
    if(st.size() == 0) 
    st.push(x); 
  
    else
    { 
          
      
              
        char a = st.top(); 
        st.pop(); 
        insert_at_bottom(x); 
  
        
        st.push(a); 
    } 
} 

char reverse()
{
    if(st.size()>0)
    {
        char x=st.top();
        st.pop();
        reverse();
        
    insert_at_bottom(x);
    }
    
}
int main() 
{ 
     
    st.push('1'); 
    st.push('2'); 
    st.push('3'); 
    st.push('4'); 
    
    while(!st.empty())
    {
         cout<<st.top()<<" ";
         st.pop();
    }
    cout<<endl;
    st.push('1'); 
    st.push('2'); 
    st.push('3'); 
    st.push('4'); 
    reverse();
    while(!st.empty())
    {
         cout<<st.top()<<" ";
         st.pop();
    }
    
    
}
  