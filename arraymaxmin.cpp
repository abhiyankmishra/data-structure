#include<iostream>
#include<limits>
 using namespace std;
  int main()
  {
      cout<<"array limit:";
      int n; 
      cin>>n;
       int array[n];
       int maxi=array[0];
       int min=array[1];

       for(int i=0;i<n;i++)
       {
           cout<<"array["<<i<<"]:";
           cin>>array[i];

       }
       
              for(int i=0;i<n;i++)
              {
                //  if(max<array[i])
         
                   maxi=max(maxi,array[i]);
            

                 if(min>array[i])
                 {
                   min=array[i];
                 }
              }


              cout<<"max is:"<<maxi<<endl;
              cout<<"min is:"<<min<<endl;



  }
