#include <iostream>

using namespace std;
class node{
      public:
    
    int data;
    node *next;
    
  
    node(int value)
    {
        data=value;
        next=NULL;
    }
    
};
    
class queue{
    node *front;
    node * back;
    public:
    queue(){
    
        front=NULL;
        back=NULL;
    }
    
    void enque(int value)
    {node *n=new node(value);
        if(front ==NULL)
        {
            front= n;
            back=n;
            return;
        }
        
        back->next=n;
        back=back->next;
    }
    
    void deque()
    {
        if(front==NULL)
         
        {
            cout<<"underflow";
            return;
        }
        
        
        node *todelete=front;
        front=front->next;
        delete todelete;
        
        if(front==NULL)
        {node *todeletee=back;
            delete back;
        }
        
    }
    
    int peek()
    
    {
        if(front==NULL)
         
        {
            cout<<"underflow";
            return -1;
        }
        
        
        return front->data;
    }
    
    bool isempty()
    {
        if(front==NULL)
         
        {
           
            return true;
        }
        
        return false;
    }
    
}   ; 

int main()
{
    queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    //  q.display();
   q.deque();
    cout<<q.peek();
    // q.display();
    
  

    return 0;
}
