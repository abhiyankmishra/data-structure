/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class treenode{
  
  public:
  int data ;
  treenode* left;//this 
  treenode *right//and this ,both are the same thing
    
    
 treenode()
 {
      data=0;
      left=NULL;
      right=NULL;
 }
 
 
 treenode(int value)
 {
      data=value;
      left=NULL;
      right=NULL;
 }
};


class bst{
  
  public:
  
  treenode* root ;
  
  
  bool isempty()
  {

      if(root==NULL)
      {
            return true;
      }
      
      else
      {
            return false;
      }
  }    
  
  
  
};

int main()
{int option;
    do {
        
        cout<<"choose what operation do you want to perform";
        cout<<"select option number,enter 0 to exit"<<endl;
        
        cout<<"1]insert node"<<endl;
        cout<<"2]search node"<<endl;
        cout<<"3]delete node"<<endl;
        cout<<"4]print node"<<endl;
        cout<<"5]clear node"<<endl;
        cout<<"1]exit program"<<endl;
        
        cin>>option;
        
        switch(option)
        {
            case 0:
                break;
            
            case 1:
                break;
                
            
        }
        
    }while(option!=0)

    return 0;
}
  