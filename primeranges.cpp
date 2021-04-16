#include<iostream>
using namespace std;
int main()
  
{   cout<<"enter limit";
    int a,b;
    cout<<"emter limits starting from atleast 2";
    cin>>a>>b;
    int i;
    for (int j=a;j<=b;j++)
    {
        for (i=2;i<j;i++)
    {
        if(j%i==0)
    {cout<<j<<": is not prime"<<endl;
    break;}
    }
    if(i==j)
    {cout<<j<<": is prime"<<endl;}
    }
    


}
    