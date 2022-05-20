#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 998244353;

pair<ll, ll> dp[2010][2010];
vector<vector<int>> path(2001);
int N, M, K, S, T, X;

void dfs(int i, int j) {
    if(i > 2002) return;
    for(auto v: path.at(j)) {
        if(v == X) {
            dp[i+1][v].first += dp[i][j].second;
            dp[i+1][v].second += dp[i][j].first;
        } else {
            dp[i+1][v].first += dp[i][j].first;
            dp[i+1][v].second += dp[i][j].second;
        }
        dp[i+1][v].first %= MOD;
        dp[i+1][v].second %= MOD;
    }
}

int main () {
    cin >> N >> M >> K >> S >> T >> X;
    for(int i=0; i<M; i++) {
        int U, V;
        cin >> U >> V;
        path.at(U).push_back(V);
        path.at(V).push_back(U);
    }
    
    for(int i=0; i<2002; i++) {
        for(int j=0; j<2002; j++) {
            dp[i][j] = {0, 0};
        }
    }
    dp[1][S].first = 1;
    for(int i=1; i<K+2; i++) {
        for(int j=1; j<N+1; j++) {
            dfs(i, j);
        }
    }

    //for(int i=0; i<12; i++) {
    //    for(int j=0; j<16; j++) {
    //        cout << dp[i][j].first << " ";
    //    }
    //    cout << endl;
    //}
    cout << dp[K+1][T].first << endl;
    return 0;
}