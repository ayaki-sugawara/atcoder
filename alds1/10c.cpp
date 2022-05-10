#include <bits/stdc++.h>
using namespace std;

int dp[1010][1010];
//dp[i][j] Xのi番目, Yのj番目までの最長共通部分列
int main () {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        string X, Y;
        cin >> X >> Y;
        for(int x=1; x<=X.size(); x++) {
            for(int y=1; y<=Y.size(); y++) {
                if(X.at(x-1)==Y.at(y-1)) {
                    dp[x][y] = dp[x-1][y-1] + 1;
                } else {
                    dp[x][y] = max(dp[x-1][y], dp[x][y-1]);
                }
            }
        }
        cout << dp[X.size()][Y.size()] << endl;
    }
    return 0;
}