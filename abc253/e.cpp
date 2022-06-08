#include <bits/stdc++.h>
using namespace std;
const int mod = 998244353;

int dp[1001][5001];

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    for(int j=1; j<M+1; j++) {
        dp[1][j] = 1;
    }
    for(int i=1; i<N; i++) {
        for(int j=1; j<M+1; j++) {
            for(int s=1; s<=j-K; s++) {
                dp[i+1][s] += dp[i][j];
                dp[i+1][s] %= mod;
            }
            for(int s=j+K; s<=M; s++) {
                dp[i+1][s] += dp[i][j];
                dp[i+1][s] %= mod;
            }
        }
    }
    long long ans = 0;
    for(int j=1; j<M+1; j++) {
        ans += (long long)dp[N][j];
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
}