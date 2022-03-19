// Q. Min no coins required to make a change of given amount.

#include <bits/stdc++.h>
using namespace std;
const int N = 25e2+10;
int dp[10010];

int func(int amount, vector<int>& coins);
int coinChange(vector<int>& coins ,int amount);

int main(){
    vector<int> coins = {2,3,5};
    cout<< coinChange(coins, 11);
    return 0;
}

int coinChange(vector<int>& coins, int amount) {
    memset(dp, -1, sizeof(dp));
    int ans = func(amount, coins);
    return ans == INT_MAX ? -1 : ans;
}

int func(int amount, vector<int>& coins){
    if(amount == 0){
        return 0;
    }
    if (dp[amount] != -1){
        return dp[amount];
    }

    //ans of 11 amount func intial will be INT_MAX
    //ans of (11 - 5) = 6 ; In amount = 6 recursive call the ans is unknown
    //and still it is INT_MAX
    
    int ans = INT_MAX;
    for (int coin: coins) {
        if (amount - coin >= 0){
            ans = min(ans + 0LL, func(amount - coin, coins) + 1LL);
        }
    }
    return dp[amount] = ans;
}
