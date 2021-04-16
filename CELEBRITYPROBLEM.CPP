/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int celebrityproblem(vector<vector<int>> &v1)
{
    stack<int> s;
    
    for(int i=0;i<v1.size();i++)
    {
        s.push(i);
    }
    
    while(s.size()>1)
    {
        int temp1=s.top();
        s.pop();
        int temp2=s.top();
        s.pop();
        
        if(v1[temp1][temp2])
        {
            s.push(temp2);
        }
        
        else{
            s.push(temp1);
        }
        
    }
    
    
    int potentialceleb=s.top();
    
    
    for(int i=0;i<v1.size();i++)
    {
        if(i==potentialceleb)
        {
            continue;
        }
        if(v1[potentialceleb][i]==1)
        {
            return -1;
        }
        
        if(v1[i][potentialceleb]!=1)
        {
            return -1;
        }
    }
    return potentialceleb;
}
int main()
{
      vector<vector<int>> v{ {0, 0, 1, 0},{0, 0, 1, 0},{0, 0, 0, 0},{0, 0, 1, 0} };
      int celeb=celebrityproblem(v)  ;
      if(celeb==-1)
      {
          cout<<"no celebrity";
      }
      else
      {
        cout<<"celeb is:"<<celeb;  
      }
      
    return 0;
}
