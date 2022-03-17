#include <bits/stdc++.h>
using namespace std;
const int N = 25e2+10;
vector<int> a(N);

int lis(int i);
int dp[N];
//difference between subsequence and a subarray should know 
//Question is longest increasing subsequence

int main(){
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int ans = 0; 
    for (int i = 0; i < n; i++){
        // function call to lis function
        ans = max(ans, lis(i));
    }

    cout<<ans<<" ";

    return 0;
}

int lis(int i) {

    if (dp[i] != -1) {
        return dp[i];
    }

    int ans = 1;
    for (int j = 0; j < i; j++){
        if (a[i] > a[j]){
            ans = max(ans, lis(j) + 1);
        }
    }
    return dp[i] = ans;
}