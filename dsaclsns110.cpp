#include <iostream>
using namespace std;

int main() {
	int t;
	 cin>>t;
	  while(t--)
	  {
	       int l,n;
	       cin>>l>>n;
	       int a[l];
	       for(int i=0;i<l;i++)
	       {
	            cin>>a[i];
	       }
	       
	       int i=0,j=1;
	       bool check=false;
	       while(i<l && j<l)
	       {
	            if(i!=j and a[j]-a[i]==n)
	            {
	            check=true;
	                 break;
	            }
	            
	           else if(a[j]-a[i]>n)
	           {
	               i++;
	           }
	           else{
	                j++;
	           }
	            
	       }
	       if(check)
	       {
	            cout<<1;
	       }
	       else{
	           cout<<-1;
	       }
	  }
	       
	return 0;
}