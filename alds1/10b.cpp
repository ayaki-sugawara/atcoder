#include <bits/stdc++.h>
using namespace std;

int INF = 1001001001;
int dp[110][110];
int p[110];
//dp[i][j] iこめからjこめまでのmatrixのスカラー乗算最小値
int main() {
    int n;
    cin >> n;
    /*
     m[i][j]: 区間iからjまでの最小値
     m[i][j] = 0 if i=j
     m[i][j] = min(i<=k<j) m[i][k] + m[k+1][j] + p[i-1]p[k]p[j] if i<=j
    */
    for(int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        p[i] = a;
        if(i==n-1) {
            p[n] = b;
        }
    }
    for(int c=0; c<n; c++) {
        for(int i=1; i<n+1-c; i++) {
            // i = i, j = i+c
            int j=i+c;
            if(c==0) dp[i][j] = 0;
            else {
                int candidate = INF;
                for(int k=i; k<j; k++) {
                    int mik = dp[i][k];
                    int mkj = dp[k+1][j];
                    if(mik+mkj+p[i-1]*p[k]*p[j]<candidate) candidate = mik+mkj+p[i-1]*p[k]*p[j];
                } 
                dp[i][j] = candidate;
            }
        }
    }
    cout << dp[1][n] << endl;
    return 0;
}