#include <bits/stdc++.h>
using namespace std;
int INF = 1001001001;
int dp[30][50010];
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> price(m+1);
    for(int i=1; i<m+1; i++) {
        cin >> price.at(i);
    }
    

    for (int p = 0; p < n+1; p++)
    {
        dp[0][p] = INF;
    }
    dp[0][0] = 0;

    for(int i=1; i<m+1; i++) {
        for(int p=0; p<n+1; p++) {
            dp[i][p] = INF;
        }
    }
    for(int i=1; i<m+1; i++) {
        for(int p=0; p<n+1; p++) {
            if(p - price.at(i) >= 0) {
                dp[i][p] = min(dp[i-1][p-price.at(i)] + 1, dp[i][p-price.at(i)] + 1);
                dp[i][p] = min(dp[i][p], dp[i-1][p]);
            } else {
                dp[i][p] = dp[i-1][p];
            }
        }
    }
   // for(int i=0; i<m+1; i++) {
   //     for(int p=0; p<n+1; p++) {
   //         cout << dp[i][p] << " ";
   //     }
   //     cout << endl;
   // }
    cout << dp[m][n] << endl;
    return 0;
}