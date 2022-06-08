#include <bits/stdc++.h>
using namespace std;
const long long mod = 998244353;

long long dp[1001][5001];

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    for(int j=1; j<M+1; j++) {
        dp[1][j] = j;
    }
    for(int i=2; i<N+1; i++) {
        for(int j=1; j<M+1; j++) {
            dp[i][j] += dp[i][j-1];
            dp[i][j] %= mod;
            if(K==0) {
                dp[i][j] += dp[i-1][M];
                dp[i][j] %= mod;
                continue;
            }
            if(j+K-1<=M) {
                dp[i][j] += max((long long)0, dp[i-1][M] - dp[i-1][j+K-1]);
                dp[i][j] %= mod;
            }
            if(j-K>=0) {
                dp[i][j] += max((long long)0, dp[i-1][j-K] - dp[i-1][0]);
                dp[i][j] %= mod;
            }
        }
    }
    cout << dp[N][M] << endl;
    return 0;
}