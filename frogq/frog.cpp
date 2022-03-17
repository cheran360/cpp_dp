// 1, 2, 3.... N stones
// if frog is at i it can jump to i+1 stone or i+2 stone
// cost --> |hi - hj| 
// h -- height of the stone
// find min cost to reach Nth stone 

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int h[N];
int dp[N];
int func(int i);

int main(){
    memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }
    cout<<func(n-1);
    return 0;
}

//TOP BOTTOM APPROACH
int func(int i){
    if (i == 0){
        return 0;
    }
    if (dp[i] != -1){
        return dp[i];
    }

    int cost = INT_MAX;

    // way 1
    cost = min(cost, func(i-1) + abs(h[i] - h[i - 1]));
    // way2
    if(i > 1){
    cost = min(cost, func(i-2) + abs(h[i] - h[i - 2]));
    }

    return dp[i] = cost;
}
