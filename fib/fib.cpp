#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

// Fibonacci numbers
// 0 1 1 2 3 5 8

// func(c) --> nth fib number
int dp[N];


// Time complexity O(2^n) --> O(n)

int fib(int n);

int main(){
    memset(dp, -1, sizeof(dp));
    int n;
    cout << "Input a number to find fib"<< endl;
    cin >> n;
    cout << fib(n);

    // BOTTOM UP APPROACH----------
        // dp[0] = 0;
        // dp[1] = 1;
        // for (int i=2; i<=n; i++){
        //     dp[i] = dp[i-1] + dp[i-2];
        // }
        // cout<<dp[n];
        // return 0;
    //-----------------------------
}

// TOP DOWN APPROACH
int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = fib(n - 1) + fib(n - 2);
}
