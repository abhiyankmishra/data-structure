// solved on gfg

// // { Driver Code Starts
// //Initial template for C++

// #include <bits/stdc++.h>
// using namespace std;

//  // } Driver Code Ends


// //User function template for C++

// class Solution{
//   public:
//     int middle(int a,int b, int c){
//     if(a>b)
//     {
//         if(b>c)
//         {
//             return b;
//         }
//         else if (c>a)
//         {
//             return a;
//         }
//         else{
//             return c;
//         }}
//              // ***************
//     else 
//     {
//         if(a>c)
//         {
//             return a;
//         }
//         if (c>b)
//         {
//             return b;
//         }
//         else{
//             return c;
//         }    
//     }
//     }
// };

// // { Driver Code Starts.
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int A,B,C;
//         cin>>A>>B>>C;
//         Solution ob;
//         cout<<ob.middle(A,B,C) <<"\n";
//     }
//     return 0;
// }  // } Driver Code Ends