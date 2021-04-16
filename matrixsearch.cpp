#include<iostream>
using namespace std;
int main()
  {
      cout<<"array row:";
      int r; 
      cin>>r;
      cout<<"array column:";
      int c; 
      cin>>c;
       int m[r][c];
cout<<"key";
int key;
cin>>key;

       for(int i=0;i<r;i++)
       {for(int j=0;j<c;j++)
        {
           cout<<"array["<<i<<"]["<<j<<"]:";
           cin>>m[i][j];

       }
       }
int rr=0,cc=c-1;
bool found=false;;
while(rr<r && cc>=0)
{
if(m[rr][cc]==key)
{
    found=true;
}
 if(m[rr][cc]>key)
{
    cc--;
}
else{
rr++;
}
}    
if(found)
{
    cout<<"ELEMENT FOUND";
}
else{
    cout<<"element not found";
}
return 0;
  }
