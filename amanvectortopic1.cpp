/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;
     a.push_back(1);
     a.push_back(2);
     a.push_back(3);
     a.push_back(4);
     
     vector<int>::iterator fuck;
     for(fuck=a.begin();fuck!=a.end();fuck++)
     {
         cout<<*fuck<<" ";
     }
     cout<<endl;
       for(int i=0;i<a.size();i++)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
       for(auto fuck2:a)
       {
           cout<<fuck2<<" ";
       }
       
       
       cout<<"*********"<<endl;
       vector<int> b (2,40);
       swap(a,b);
       for(auto al:a)
       {
           cout<<al<<" ";
       }
       cout<<endl;
       for(auto bl:b)
       {
           cout<<bl<<" ";
       }
    return 0;
}
