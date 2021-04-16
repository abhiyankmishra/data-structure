
#include "bits/stdc++.h"


 using namespace std;
  int main()
  {
      cout<<"array limit:";
      int n; 
      cin>>n;
       int array[n];
      
int check[n];
       for(int i=0;i<=n;i++)
       {
           cout<<"array["<<i<<"]:";
           cin>>array[i];
           check[array[i]]=false;

       }



for(int i=0;i<=n;i++)
{
if(check[array[i]]==true)
{
cout<<"duplicate element is:"<<array[1]<<endl;\
return 0;
}
else
{
    check[array[i]]=true;
}

}


  }

