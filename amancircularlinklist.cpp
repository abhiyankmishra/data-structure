// CIRCULAR LINK LIST 

#include <iostream>

using namespace std;


class node{
  
  public:
  int data;
  node* next;
  
  
  node(int value)
  {
      data=value;
      next=NULL;
  }
    
};

void addtohead(node* &head,int value)
{
    node* n=new node(value);
    
    if(head==NULL)
    {    
        n->next=n;
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    
    temp->next=n;
    n->next=head;
    head=n;
    
    
    
    
    
}

void addtotail(node* &head,int value)
{
    if(head==NULL)
    {
         addtohead(head,value);
         return;
    }
    
    
    node* n=new node(value);
    

    
    
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    
    n->next=head;
    temp->next=n;
    
    
     
} 

void deletenode(node* &head,int value)
{
     if(head==NULL)
     {
          return;
     }
     node* temp=head;
   
     while(temp->next->data!=value)
     {
         temp=temp->next;
     }
     
     node* todelete=temp->next;
     if(todelete==head)
     
     {
         head=head->next;
     }
     
     temp->next=temp->next->next;
     delete todelete;
     
     
     
}

void display(node* head)
{
    if(head==NULL)
    {
        return;
    }
    
    node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    } while(temp!=head);
   
    
    cout<<"NULL"<<endl;
}

int main()
{
    node* head=NULL;
     
    addtotail(head,1);
    addtotail(head,2);
    addtotail(head,3);
    addtohead(head,5);
    addtohead(head,5);
    addtohead(head,7);
      display(head);
    deletenode(head,3);
    display(head);
    deletenode(head,1);
    display(head);
    deletenode(head,7);
    display(head);
 
}
