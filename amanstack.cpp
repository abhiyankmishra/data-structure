/******************************************************************************


*******************************************************************************/

#include <iostream>
 
using namespace std;

#define n 100

class stack
{
   int* arr;
   int top;
   
   public:
   
   stack()
   {
       arr=new int[n];
       top=-1;
   }
   
   
   bool isempty()
   {
        if(top==-1)
        {return  true;
        }
        
        return false;
   }
   
   void push(int val)
   {
        if(top==n-1)
        {cout<<"stack overflow";
            return ;
        }
        
        arr[++top]=val;
   }
   
   int pop()
   {
        if(isempty())
        {
            // cout<<"stack underflow";
            return -1 ;
        }
        // cout<<"popped element:"<<arr[top]<<endl;
        
        return arr[top--];
   }
   
   int peek()
   {
       if(isempty())
       {
           cout<<"no element to peek";
           return -1;
       }
       
       return arr[top];
   }
   
   void display()
   {
       if(isempty())
       {
           cout<<"no element to dislay";
            return;  
           
       }
       
       for(int i=top;i>=0;i--)
       {
           cout<<arr[i]<<endl;
       }
       
   }
   
  int findmid()
  {int count=0;
      while(peek()!=-1)
      {
          count++;
      }
      int mid;
      count=count/2;
      int temp=0;
      while(count!=temp+1)
      {
          mid=peek();
          temp++;
      }
       
      return mid;
  }

int insertatend(int x)
{
    if(isempty()){
        push(x);
    }
    else{
        
       int a=pop();
        
        
        insertatend(x);
        push(a);    
        
        
    }
    
    
}

};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    // cout<<"mid is:"<<st.findmid();
//     st.display();
    // st.pop();
    st.display();
    st.insertatend(0);
    // cout<<st.peek()<<endl;
    // st.display();

    return 0;
}





