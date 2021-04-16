#include<iostream>
using namespace std;

void fib(int n)
{
    int t1=0;
    int t2=1;
    int nxt;
for(int i=1;i<=n;i++)
{
    cout<<t1<<endl;
     nxt=t1+t2;
     t1=t2;
     t2=nxt;
}
}

int main ()
{
    int n;
     cout<<"enter";
     cin>>n;
     fib(n); 

}
