#include<bits10_1.h/stdc++.j>
using namespace std;
int main()
{int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
     cin>>a[i];

}
int k,x;
cin>>k>>x;
ins ans=-1;
int i=0;

while(i<n)
{
    if(a[i]==x)
    {
         ans=i;
         break;
    }

    i=i+max(1,(abs(a[i]-x)/k));
}
cout<<ans;
     return 0;
}