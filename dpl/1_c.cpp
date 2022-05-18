#include <bits/stdc++.h>
using namespace std;

int dp[110][10100];
int main() {
    int N, W;
    cin >> N >> W;
    vector<int> value(N+1);
    vector<int> weight(N+1);
    for(int i=1; i<N+1; i++) {
        cin >> value.at(i) >> weight.at(i);
    }
    //initialize dp i = 0
    for(int w=0; w<W+1; w++) {
        dp[0][w] = 0;
    }
    //計算量は 100 * 10000 = 1e6
    for(int i=1; i<N+1; i++) {
        for(int w=0; w<W+1; w++) {
            if( w >= weight.at(i)) {
                dp[i][w] = max(dp[i-1][w-weight.at(i)] + value.at(i), dp[i][w-weight.at(i)] + value.at(i));
                dp[i][w] = max(dp[i-1][w], dp[i][w]);
            } else {
                dp[i][w] = dp[i-1][w];
            }
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}