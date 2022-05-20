#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

long long dp[51][2550];
int N, M, K;

void Dp(int i, int j) {
    for(int a=1; a<=M; a++) {
        if(j+a<=K) {
            dp[i+1][j+a] += dp[i][j];
            dp[i+1][j+a] %= MOD;
        }
    }
}

int main() {
    cin >> N >> M >> K;
    for(int i=1; i<M+1; i++) {
        if(i<=K) dp[1][i] = 1;
    }
    
    for(int i=1; i<N; i++) {
        for(int sum=1; sum<=K; sum++) {
            Dp(i, sum);
        }
    }
    long long ans = 0;
    for(int sum=1; sum<=K; sum++) {
        ans += (long long)dp[N][sum];
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}