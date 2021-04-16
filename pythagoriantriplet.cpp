#include<iostream>
using namespace std;


int max(int n1,int n2, int n3) {
    

    

    if (n1 >= n2) {
        if (n1 >= n3)
            return n1;
        else
            return n3;
    }
    else {
        if (n2 >= n3)
            return n2;
        else
            return n3;
    }

    
}

bool pytrip(int a,int b,int c)
{
    int x=max(a,max(b,c));
    int y,z;
    
    if(x==a)
    {
        y=b;
        z=c;


    }
    else if(x==b)
    {
        y=a;
        z=c;
        

    }
    else 
    {
        y=b;
        z=a;
        

    }

    if(x*x==y*y+z*z)
    {return true;}
    else
    {return false;}
}

int main()
{
    int a,b,c;
    cout<<"enter a,b,c";
    cin>>a>>b>>c;
    if(pytrip(a,b,c))
    {cout<<"yes";}
    else
    {
        cout<<"no";
    }
    
}