
#include <bits/stdc++.h>
using namespace std;
 

int maxProfit(int price[], int n)
{
 
    int buy1, profit1, buy2, profit2;
 
   
    buy1 = buy2 = INT_MAX;
 
    
    profit1 = profit2 = 0;
 
    for (int i = 0; i < n; i++) {
 
       
        buy1 = min(buy1, price[i]);
 
       
        profit1 = max(profit1, price[i] - buy1);
 
     
        buy2 = min(buy2, price[i] - profit1);
 
      
        profit2 = max(profit2, price[i] - buy2);
    }
 
    return profit2;
}
 
int main()
{
    int price[] = { 2, 30, 15, 10, 8, 25, 80 };
    int n = sizeof(price) / sizeof(price[0]);
    cout << "Maximum Profit = "
         << maxProfit(price, n);
    return 0;
}




    
