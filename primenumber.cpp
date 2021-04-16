#include<iostream>
#include<cmath>
using namespace std;
int main()
 {


 int n;
 cout<<"ENTER";
 cin>>n;
 int i;
  for(i=2;i<sqrt(n);i++)
  {
      if(n%i==0)
      {
          cout<<"not prime"<<endl;
          break;
      }
  }
if(i==n)
{
    cout<<"prime"<<endl;
}
}
    