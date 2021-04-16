#include<iostream>
using namespace std;

int main()
{
    int n;;
    cout<<"enter limit";
    cin>>n;
    cin.ignore();
    
    char array[n+1];

 
       cin.getline(array,n);
       cin.ignore();

       int count=0;
       int ans=0;

       int i=0;
       while(1)
       {if(array[i]==' ' || array[i]=='\0')
       {
              ans=max(ans,count);
              count=0;
       }
       count++;
       if(array[i]=='\0')
       {
           break;
       }
i++;
       }
       cout<<"max length is:"<<ans;
       return 0;
} 