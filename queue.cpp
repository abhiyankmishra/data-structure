#include <iostream>

using namespace std;
#define n 20
class queue{
  int *arr;
  int front;
  int back;
  
  public:
  
  queue()
  {
      arr=new int[n];
      front=-1;
      back=-1;
      
  }
  
  void enqueu(int data)
  {
      if(back==n-1)
      {
          cout<<"queue overflow";
          return;
          
      }
      
      arr[++back]=data;
      
      if (front==-1)
      {
          front++;
      }
      
  }
  
  int deque(){
  if(front==-1 || front>back)
  {
      cout<<"undeflow";
      return -1;
      
  }
  
  return arr[front++];
      
  }
   
  int peek()
  {
     if(front==-1 || front>back)
  {
      cout<<"undeflow";
      return -1;
      
  }
  
  return arr[front];
  
  }
  
  bool isempty()
  {
     if(front==-1 || front>back)
  {
      return true;
      
  }
  
  return false;
  
  }
  void display()
  {
   if(front==-1 || front>back)
  {
      cout<<"undeflow";

  }
  
  for(int i=front;i<=back;i++)
  {
      cout<<arr[i]<<",";
  }
  cout<<endl;
  
  }
  
  
};

int main()
{
    queue q;
    q.enqueu(1);
    q.enqueu(2);
    q.enqueu(3);
    q.enqueu(4);
     q.display();
    cout<<q.deque();
    cout<<q.peek();
    q.display();
    
  

    return 0;
}
