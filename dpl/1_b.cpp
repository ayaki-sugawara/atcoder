#include <bits/stdc++.h>
using namespace std;

    int dp[110][10010];
int main() {
    int N, W;
    cout << "test" << endl;
    cin >> N >> W;
    int Value[100];
    int Weight[100];
    for(int i=0; i<N; i++) {
        int v, w;
        cin >> v >> w;
        Value[i] = v;
        Weight[i] = w;
    }
    for(int i=0; i<W; i++) {
        dp[0][i] = 0;
    }
    
    for(int i=1; i<N+1; i++) {
        for(int w=0; w<W+1; w++) {
            if(w >= Weight[i-1]) {
                dp[i][w] = max(dp[i-1][w], dp[i-1][w-Weight[i-1]] + Value[i-1]);
            } else {
                dp[i][w] = dp[i-1][w];
            }
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}