/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
#include<iostream>

using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2)
{
    return p1.first<p2.first;
}

int main()
{
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // cout<<v.size()<<endl;
    // // for(int i=0;i<v.size(),i++)
    // // vector<int>::iterator xx;
    // // xx=v.begin();
    // // cout<<*xx<<endl;
    // // xx=v.end();
    // // cout<<--*xx<<endl;
    // // vector<int>::iterator it;
    // // for(it=v.begin();it!=v.end();it++)
    // // {
    // //     cout<<*it<<endl;
    // // }
    
    // for(auto xxx:v)
    // {
    //      cout<<xxx<<" ";
    // }
    // cout<<endl;
    
    // vector<int> v2 (3,50); //(size,fillingelement)
    
    // for(auto yyy:v2)
    // {
    //      cout<<yyy<<" ";
    // }
    // cout<<endl;
    // swap(v,v2);
    
    // for(auto xxx:v)
    // {
    //      cout<<xxx<<" ";
    // }
    
    // cout<<endl;
    // for(auto yyy:v2)
    // {
    //      cout<<yyy<<" ";
    // }
    
    
    int arr[]={10,16,7,14,5,3,2,9};
    vector<pair<int,int>> v;
    
    for (int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
         v.push_back(make_pair(arr[i],i));
         
    }
    
    sort(v.begin(),v.end(),compare);
    
    for(int i=0;i<v.size();i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        arr[v[i].second]=i;
        
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<arr[i]<<" ";
        
    }
    
    return 0;
}
