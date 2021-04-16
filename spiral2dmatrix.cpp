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


       int row_start=0,row_end=r-1,col_start=0,col_end=c-1;
       while(row_start<=row_end && col_start<=col_end)
       {
        
        for(int col=col_start;col<=col_end;col++)
        {
            cout<<m[row_start][col]<<" ";
        }

        row_start++;
        for(int row=row_start;row<=row_end;row++)
        {
            cout<<m[row][col_end]<<" ";
        }

                col_end--;
                for(int col=col_end;col>=col_start;col--)
                {
                    cout<<m[row_end][col]<<" ";
                }        
                       
                     row_end--;
                     for(int row=row_end;row>=row_start;row--)
                     {
                          cout<<m[row][col_start]<<" ";

                     }                                   
                          col_start++;

       }
       return 0;
       }




 
















