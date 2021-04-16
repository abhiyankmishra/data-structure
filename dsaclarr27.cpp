#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    int a[100000];fill(a,a+100000,-1);
    int end=0,carry=0;
    a[0]=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<=end;j++)
            {
                int mul=i*a[j]+carry;
                a[j]=mul%10;
                carry=mul/10;
            }

            while(carry!=0)
            {
              a[++end]=carry%10;
              carry=carry/10;
            }
        }

for(int i=end;i>=0;i--)
{
    cout<<a[i];
}
}


