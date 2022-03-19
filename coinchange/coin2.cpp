// Q. No of ways to make a change of given amount with coins.

#include <bits/stdc++.h>
using namespace std;
const int N = 25e2+10;
int dp[310][10010];

int func(int ind, int amount, vector<int>& coins);
int coinChange(vector<int>& coins ,int amount);

int main(){
    vector<int> coins = {1, 2, 5};
    int amount = 5;
    cout<< coinChange(coins, amount);
    return 0;
}

int coinChange(vector<int>& coins, int amount) {
    memset(dp, -1, sizeof(dp));
    return func(coins.size() - 1,  amount, coins);

}

int func(int ind, int amount, vector<int>& coins){
    if(amount == 0){
        return 1;
    }
    if(ind < 0){
        return 0;
    }
    if (dp[ind][amount] != -1){
        return dp[ind][amount];
    }

    //ans of 11 amount func intial will be INT_MAX
    //ans of (11 - 5) = 6 ; In amount = 6 recursive call the ans is unknown
    //and still it is INT_MAX
    
    int ways = 0;
    for(int coin_amount = 0; coin_amount <= amount; coin_amount += coins[ind]){
        ways += func(ind - 1, amount - coin_amount, coins);
    }
    return dp[ind][amount] = ways;
}