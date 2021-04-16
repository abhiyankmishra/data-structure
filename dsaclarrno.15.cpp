#include <iostream>
using namespace std;

int minimumJump(int arr[], int n)
{
    int dp[n];
    
    if(arr[0] == 0) {
        return -1;
    }
    
    // initially fill all entry with infinite or any number which is greater then all possible ans.
    // here maximum possible ans could be n so you can use any number greater then n
    for(int i = 0; i < n; i++) {
        dp[i] = n+2;
    }
    
    dp[0] = 0;
    
    // Main Logic for updating dp table.
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= arr[i]; j++) {
            if(i + j < n && dp[i+j] > dp[i] + 1) {
                dp[i+j] = dp[i] + 1;
            }
        }
    }
    
    if(dp[n-1] == n+2) {
        return -1;
    } 
    
    return dp[n-1];
}

int main() {
    
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << minimumJump(arr, n) << endl;

	return 0;
}

