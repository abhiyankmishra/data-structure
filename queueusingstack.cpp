#include<bits/stdc++.h>
using namespace std;


class que{
    
    stack<int>  s1;
    // stack<int> s2;
    
    
    
    public:
    
     void push(int data)
     {
          s1.push(data);
     }
     
    //  int pop()
    //  {
    //      if(s1.empty() && s2.empty())
    //      {
    //           cout<<"empty"<<endl;
    //           return -1;
    //      }
         
    //      if(s2.empty())
    //      {
    //           while(!s1.empty())
    //           {
    //               int topval=s1.top();
    //               s1.pop();
                  
    //               s2.push(topval);
    //           }
              
              
    //      }
      
    //   int temp=s2.top();
    //   s2.pop();
    //   return temp;
         
    //  }
     
       int pop()
     {
         if(s1.empty())
         {
              cout<<"empty"<<endl;
              return -1;
         }
         
         int x=s1.top();
         s1.pop();
         
         if(s1.empty())
         {
             return x;
         }
         
         int temp=pop();
         
         s1.push(x);
         
         return temp;
         
         
     }
     
     
    //  bool isempty()
    //  {if(s1.empty() && s2.empty())
    //      A{
             
    //           return true;
    //      }
         
    //      return false;
         
          
    //  }
     
     
    //  int peek()
    //  {
    //      if(s1.empty() && s2.empty())
    //      {
    //           cout<<"empty"<<endl;
    //           return -1;
    //      }
         
    //      if(s2.empty())
    //      {
    //           while(!s1.empty())
    //           {
    //               int topval=s1.top();
    //               s1.pop();
                  
    //               s2.push(topval);
    //           }
              
              
    //      }
      
    //   int temp=s2.top();
      
    //   return temp;
         
    //  }
     
     
     
     
    //  void print()
    //  {
          
    //  }
     
};

int main()
{
    que q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    
    cout<<q.pop();
    // cout<<q.peek();
}