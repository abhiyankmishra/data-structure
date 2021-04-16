
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

void addtotail(node* &head,int value)
{
    node* n=new node(value);
    
    if(head==NULL)
    {
        head=n;
        return;
    }
    
    
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    temp->next=n;
    
     
} 

void addtohead(node* &head,int value)
{
    node* n=new node(value);
    
    if(head==NULL)
    {
        head=n;
        return;
    }
    n->next=head;
    head=n;
    
    
    
    
}

void deletenode(node* &head,int value)
{
     if(head==NULL)
     {
          return;
     }
     node* temp=head;
     if(head->data==value)
     {
          node* todelete=head;
          head=head->next;
          delete todelete;
          return;     
     }
     
     while(temp->next->data!=value)
     {
         temp=temp->next;
     }
     
     node* todelete=temp->next;
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
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* iterativereverse(node* &head)
{
     node* prev=NULL;
     node* curr=head;
     node* next;
     
     
     while(curr!=NULL)
     {
         next=curr->next;
         curr->next=prev;
         
         
         
         prev=curr;
         curr=next;
     }
     
     return prev;
}

node* recursivereverse(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    
    node* newnode=recursivereverse(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return newnode;
    
}
node* reversek(node* &head,int k)
{
     node* prev=NULL;
     node* curr=head;
     node* next;
     
     int count =0;
     while(curr!=NULL && count<k)
     {
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
         count++;
     } 
     if(next!=NULL)
     {
       head->next=reversek(next,k);  
     }
     
     
    return prev;
}
bool detectcycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    
    
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        
        if(fast==slow)
        {
            return true;
        }
    }
    
    return false;
}

void makecycle(node* &head,int pos)
{
    node* temp=head;
    node* startnode;
    
    
    int count=1;
    while(temp->next!=NULL)
    { 
        if(count ==pos)
        {
             startnode=temp;
        }
        temp=temp->next;
        count++;
        
    }
    
    
    temp->next=startnode;    
    
}

void removecycle(node* &head)
{
    node* fast=head;
    node* slow=head;
    
    do
    {
        fast=fast->next->next;
        slow=slow->next;
    }while(slow!=fast);

    fast=head;
    while(slow->next!=fast->next)
    {
    slow=slow->next;
    fast=fast->next;
    }
    
    slow->next=NULL;
    
}

node* iterativemerge(node* &head,node* &head2)
{
    node* p1=head;
    node* p2=head2;
    node * dummynode=new node(-1);
    node* p3=dummynode;
    
    while(p1!=NULL && p2!=NULL)
    {
        if(p1->data>p2->data)
        {
            p3->next=p2;
            p2=p2->next;
            
        }
        
        
        
        else
        {
            p3->next=p1;
        
            
            p1=p1->next;
            
        }
        
        
        p3=p3->next;
    }
    
    while(p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        
        p3=p3->next;
    }
    while(p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        
        p3=p3->next;
    }
    
    return dummynode->next;
}

node* recursivemerge(node* &head,node* &head2)
{
    
    
    if(head==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head;
    }
    
    node* res;
    
    if(head->data<head2->data)
    {
        res=head;
        res->next=recursivemerge(head->next,head2);
    }
    
    else
    {
        res=head2;
        res->next=recursivemerge(head,head2->next);
    }
    return res;
}

void evenafterodd(node* &head)
{
     node* odd=head;
     node* even=head->next;
     node* evenstart=even;
     
     while(odd->next!=NULL && even->next!=NULL)
     {
         odd->next=even->next;
         odd=odd->next;
         even->next=odd->next;
         even=even->next;
        
     }
     
     odd->next=evenstart;
     if(odd->next!=NULL)
     {
         even->next=NULL;
     }
     
}

int main()
{
    node* head=NULL;
    // node* head2=NULL;
    addtotail(head,1);
    addtotail(head,2);
    addtotail(head,3);
    addtotail(head,4);
    addtotail(head,5);
    addtotail(head,6);
    
      display(head);
    evenafterodd(head);
      display(head);
    // addtotail(head2,0);
    //  addtotail(head2,1);
    //   addtotail(head2,1);
    //   addtotail(head2,1);
    // addtotail(head2,3);
    // addtotail(head2,6);
    // addtotail(head2,7);
    // addtotail(head2,7);
    // addtotail(head2,9);
    //  display(head2);
     
    //  node* newhead=recursivemerge(head,head2);
    //   display(newhead);
    // addtotail(head,7);
    // addtotail(head,8);
    // addtotail(head,9);
    // addtotail(head,10);
    // addtotail(head,11);
    //  display(head);
    // makecycle(head,4);
    
    // cout<<detectcycle(head)<<"\n";
    // removecycle(head);
    // cout<<detectcycle(head)<<"\n";
    // display(head);
    // addtohead(head,0);
    // deletenode(head,3);
    

    // deletenode(head,0);
    // node* newhead=iterativereverse(head);
    // node* newhead=recursivereverse(head);
    // display(newhead);
    
    //  node* newhead=reversek(head,3);
    //      display(newhead);
}
