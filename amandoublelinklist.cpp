 
#include <iostream>

using namespace std;

class node{
  
  public:
  int data;
  node* next=NULL;
  node* prev=NULL;
    
    node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
    
};


void addtohead(node* &head,int value)
{
    node* n=new node(value);
    
    n->next=head;
    if(head!=NULL){
    
    head->prev=n;
        
    }
    head=n;
}


void addtotail(node* &head,int value)
{
    node* n=new node(value);
    
    if(head==NULL)
    {
        addtohead(head,value);
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        
    }
    
    temp->next=n;
    n->prev=temp;
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

void deletenode(node* &head,int pos)
{
    if(head==NULL)
    {
        return ;
    }
    
    if(pos==1)
    {
        node* todelete=head;
        if(head->next!=NULL)
        {
        head=head->next;
        head->prev=NULL;
        delete todelete;
            return;
        }
        else{
            delete todelete;
            return;
        }
        
    }
    
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=pos)
    {
        temp=temp->next;
        count++;
        
    }
    
    if(count==pos)
    {node* todelete =temp;
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        delete todelete;
        
    }
}

int length(node *head)
{
    int l=0;
    node* temp=head;
    while(temp!=NULL)
    {
         l++;
         temp=temp->next;
    }
    
    return l;
}

node* appendk(node* &head,int k)
{   node* newhead;
    node* newtail;
    node* tail=head;
    
    int l=length(head);
    k=k%l;
    int count=1;
    
    while(tail->next!=NULL)
    {
        if(count==l-k)
        {
            newtail=tail;
        }
        
        if(count==l-k+1)
        {
            newhead=tail;
        }
        
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
}
void intersect(node* &head1,node* &head2,int pos)
{
    node* temp1=head1;
    pos--;
    while(pos--)
    {
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    
    temp2->next=temp1;
}
int intersection(node* &head1,node* &head2)
{
    int l1=length(head1);
    int l2=length(head2);
    
    
    int d=0;
    
    node* ptr1;
    node* ptr2;
    
    if(l1>l2)
    {
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else
    {
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
        
    }
    
    while(d)
    {
        ptr1=ptr1->next;
        if(ptr1==NULL)
        {
            return -1;
        }
        d--;
    }
    
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2)
        {
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}
int main()
{
    node* head1=NULL;
    node* head2=NULL;
    addtotail(head1,1);
    addtotail(head1,2);
    addtotail(head1,3);
    addtotail(head1,4);
    addtotail(head1,5);
    addtotail(head1,6);
    addtotail(head2,9);
    addtotail(head2,10);
    intersect(head1,head2,3);`
    display(head1);
    display(head2);
    cout<<intersection(head1,head2);
    
    
//   addtohead(head,3);
//   addtohead(head,2);
//   addtohead(head,1);
//   addtotail(head,4);
//   addtotail(head,5);
   
//   display(head);
//   deletenode(head,4);
    // 12345
    // display(head);
    // deletenode(head,1);
    // display(head);
    // node* newhead=appendk(head,3);
    // display(newhead);
    return 0;
}
