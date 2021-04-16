 


 
/******************************************************************************

                              tree

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
# define SPACE 5
class node
{
  public:
  int data;
  node* left;
  node *right;
  node()
  {
   
       data=0;
       left=NULL;
       right=NULL;
      
  }
  node(int value)
  {
       data=value;
       left=NULL;
       right=NULL;
  }
  
  
  
    
};
class bst
{
 public :
 node *root;
 
 bst()
 {
     root=NULL;
 }
 
 
 bool isempty()
 {
      return root==NULL;
 }
 
 void preorder(node* r)
 {
      if(r==NULL)
      {
          return;
      }
      
      cout<<r->data<<" ";
      preorder(r->left);
      preorder(r->right);
      
 }
 void inorder(node* r)
 {
      if(r==NULL)
      {
          return;
      }
      
      preorder(r->left);
      cout<<r->data<<" ";
      preorder(r->right);
      
 }
 void postorder(node* r)
 {
      if(r==NULL)
      {
          return;
      }
      
      preorder(r->left);
      preorder(r->right);
      cout<<r->data<<" ";
      
 }
 
 void insert(int value)
 {
     
     node *newnode=new node(value);
     
     
      if(root==NULL)
      {
        root=newnode;
        cout<<"inserted at root"<<endl;
     
        
      }
      else{
           node* temp=root;
           while(true)
           {
               if(temp->data==newnode->data)
               {
                   cout<<"no duplicates allowed"<<endl;
                   break;
                   
               }
               
               else if(temp->data>newnode->data)
               {
                  if(temp->left==NULL)
                  {
                      temp->left=newnode;
                      cout<<"inserted at left"<<endl;
                      break;
                  }
                  
                  else{
                      temp=temp->left;
                  }
               }
               
               
               else if (temp->data<newnode->data)
               {
                  if(temp->right==NULL)
                  {
                      temp->right=newnode;
                      cout<<"inserted at right"<<endl;
                      break;
                  }
                  
                  else{
                      temp=temp->right;
                  }
               }
           }
           
      }
 }
  
void print2d(node* r,int space)
{
    if(r==NULL)
    {
        return;
    }
    
    space+=SPACE;
    print2d(r->right,space);
    cout<<endl;
    for(int i=SPACE;i<space;i++)
    {
        cout<<" ";
    }
    cout<<r->data<<endl;
    print2d(r->left,space);
}

node* iterativesearch(int key)
{
     
if(!root)
{
     return root;
}

node* temp=root;
while(temp)
{
     if(temp->data==key)
     {
          return temp;
     }
     
     else if(temp->data>key)
     {
          temp=temp->left;
     }
     else
     {
          temp=temp->right;
     }
}

return NULL;

}

node* recursivesearch(node* r,int key)
{ 

    if(!r || r->data==key )
    {
        return r;
        
    }
    
    if(r->data>key)
    {
        return recursivesearch(r->left,key);
    }
    return recursivesearch(r->right,key);
    
}
int height(node* r)
{
    if(!r)
    {
        return -1;
    }
    
    
    int lheight=height(r->left);
    int rheight=height(r->right);
    
    
    if(lheight>rheight)
    {
        return lheight+1;
    }
    else
    {
         return rheight+1;
    }
}

void helperbfs(node* r,int l)
{
     if(r==NULL)
     {
          return ;
     }
     
     else if(l==0)
     {
          cout<<r->data<<" ";
     }
     
     else 
     {
          helperbfs(r->left,l-1);
          helperbfs(r->right,l-1);
     }
}

void printbfs()
{
    int h=height(root);
    
    for(int i=0;i<=h;i++)
    {
        helperbfs(root,i);
    }
}

node* min(node* r)
{
     if(r==NULL)
     {
          return r;
     }
      
    node* temp=r;
    while(temp->left!=NULL)
    {
     
     temp=temp->left;
     
         
    }
    
    return temp;
     
     
     
     
}

node* deletenode(node* r,int key )
{
     if(r==NULL)
     {
          return r;
     }
     
     else if(r->data>key)
     {
         r->left=deletenode(r->left,key);
     }
     else if(r->data<key)
     {
         r->right=deletenode(r->right,key);
     }
     
    else
    {
     if(r->left==NULL)
     {
         node* temp=r->right;
         delete r;
         return temp;
          
     }
     
     else if(r->right==NULL)
     {
         node* temp=r->left;
         delete r;
         return temp;
          
     }
     else
     {
         node* temp=min(r->right);
         r->data=temp->data;
         r->right=deletenode(r->right,temp->data);
     }
     
}
    
    return r;
}
// ********converting normal bst to balanced bst ***********
// void storeInOrderTraversal(node *p, vector<int> &inOrderNodes) {
//     if (p != NULL) {
//         storeInOrderTraversal(p->left, inOrderNodes);
//         inOrderNodes.push_back(p->data);
//         storeInOrderTraversal(p->right, inOrderNodes);
//     }
// }
// node* convertSortedArrayToBalancedBST(vector<int> &inOrderNodes, int start, int end) {
//     // Base Case
//     if (start > end) {
//         return NULL;
//     }
    
     
//     int mid = (start + end) / 2;
//     node *z = new node(inOrderNodes[mid]);
    
   
//     z->left = convertSortedArrayToBalancedBST(inOrderNodes, start, mid - 1); 
//     z->right = convertSortedArrayToBalancedBST(inOrderNodes, mid + 1, end);
    
     
//     return z;
// }

// node* convertToBalancedBST(node *r) {
     
//     vector<int> inOrderNodes;
     
//     storeInOrderTraversal(r, inOrderNodes);
    
    
//     return convertSortedArrayToBalancedBST(inOrderNodes, 0, inOrderNodes.size() - 1);
// }
// *********************
// **************Merge 2 bst*************
void merge(node* r1,node* r2)
{
     if(! r1 && ! r2)
     {
         return;
     }
     if(!r1)
     {
          inorder(r2);
          return ;
     }
     if(!r2)
     {
          inorder(r1);
          return ;
     }
     
     node temp1=r1;
     
     node prev1=NULL;
     
     while(temp1->left)
     {
          prev1=temp1;
          temp1=temp1->next;
     }
     
     
     
     node temp2=r2;
     
     node prev2=NULL;
     
     while(temp2->left)
     {
          prev2=temp2;
          temp2=temp2->next;
     }
     
      if (temp1->data <= temp2->data) {
 
        
        cout << temp1->data << " ";
 
      
        if (prev1 == NULL) {
 
           
            merge(root1->right, root2);
        }
 
         
        else {
 
           
            prev1->left = temp1->right;
 
         
            merge(root1, root2);
        }
    }
    else {
 
        cout << temp2->data << " ";
 
         
        if (prev2 == NULL) {
 
            
            merge(root1, root2->right);
        }
 
        
        else {
            prev2->left = temp2->right;
 
            
            merge(root1, root2);
        }
    }
}
}

// **********************
};

int main()
{int option;

bst obj;
    do{
        
    cout<<"\nenter option,enter 0 to exit:"<<endl;
    cout<<"0]exit"<<endl;
    cout<<"1]insert"<<endl;
    cout<<"2]iterative search"<<endl;
    cout<<"3]delete "<<endl;
    cout<<"4]print bst"<<endl;
    cout<<"5]clear screen"<<endl;
    cout<<"6]recursive search"<<endl;
    cout<<"7]height of tree"<<endl;
    cout<<"8]print as bfs"<<endl;
    cout<<"9]bst to balanced bst "<<endl;  

    cout<<"\n___________________________________";
    
    
    cin>>option;
    
    
    switch(option)
    {
        case 0:
              break;
        case 1:
              {int val;
              cout<<"enter value to insert"<<endl;
              cin>>val;
              obj.insert(val);
              cout<<"\n___________________________________";

              break;}
        case 2:
           { //   cout<<"search"<<endl;
              int key;
              cin>>key;
              node* n=obj.iterativesearch(key);
              if(n)
              {
                  
               cout<<"found"<<endl;
                  
              }
              
              else
              {cout<<"not found"<<endl;}
              
              break;}
        case 3:
         { //   cout<<"search"<<endl;
              int key;
              cin>>key;
              node* n=obj.iterativesearch(key);
              if(n)
              {
                  
               obj.deletenode(obj.root,key);
               cout<<"deleted"<<endl;
                  
              }
              
              else
              {cout<<"not found"<<endl;}
              
              break;}
        case 4:
            {//   obj.preorder(obj.root);
            obj.print2d(obj.root,5);
                  cout<<"\n___________________________________";

              break;}
        case 5:
              {cout<<"clear screen"<<endl;
              system("cls");
              break;}
        case 6:
            {//   cout<<"search"<<endl;
              int key;
              cin>>key;
              node *n=obj.recursivesearch(obj.root,key);
              if(n)
              {
                  
               cout<<"found"<<endl;
                  
              }
              
              else
              
              {cout<<"not found"<<endl;}
              
              break;}
        case 7:
            {//   cout<<"delete"<<endl;
              cout<<"\nheight is:"<<obj.height(obj.root)<<endl;
              break; } 
              
        case 8:
           { //   cout<<"delete"<<endl;
              obj.printbfs();
              break;   } 
        // case 9: 
        //     obj.root = convertToBalancedBST(obj.root);
        //       break;      
        default:

              cout<<"enter correct option"<<endl;
              break;
                          
    }
    
}while(option!=0);
     
}
   

