#include <bits/stdc++.h>
using namespace std;

int main() 
{
int n;
 cin>>n;
 
 int A[n];
  int X;
   cin>>X;
   for(int i=0;i<n;i++)
   {
        cin>>A[i];
   }

int l,r;
for (int i = 0; i < n - 3; i++)  
    {  
        for (int j = i+1; j < n - 2; j++)  
        {  
            // Initialize two variables as  
            // indexes of the first and last  
            // elements in the remaining elements  
            l = j + 1;  
            r = n-1;  
  
            // To find the remaining two  
            // elements, move the index  
            // variables (l & r) toward each other.  
            while (l < r)  
            {  
                if( A[i] + A[j] + A[l] + A[r] == X)  
                {  
                    cout << A[i]<<", " << A[j] <<  
                        ", " << A[l] << ", " << A[r];  
                    return 0;
                }  
                else if (A[i] + A[j] + A[l] + A[r] < X)  
                    l++;  
                else // A[i] + A[j] + A[l] + A[r] > X  
                    r--;  
            } // end of while  
        } // end of inner for loop  
    } // end of outer for loop  
}  
  