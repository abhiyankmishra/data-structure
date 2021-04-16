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

      

       for(int i=0;i<r;i++)
       {for(int j=0;j<c;j++)
        {
           cout<<"array["<<i<<"]["<<j<<"]:";
           cin>>m[i][j];

       }
       }



       for(int i=0;i<r;i++)
       {for(int j=i;j<c;j++)
        {
           int temp=m[i][j];
           m[i][j]=m[j][i];
           m[j][i]=temp;

       }
       }

 for(int i=0;i<r;i++)
       {for(int j=0;j<c;j++)
        {
           cout<<"["<<i<<"]["<<j<<"]:"<<m[i][j]<<", ";
        

       }
       cout<<endl;
       }
  }