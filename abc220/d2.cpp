#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++) 
using ll = long long;

int mod = 998244353;
int main() {
  int n; 
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a.at(i);
  vector<vector<int>> dp(n+1, vector<int>(10, 0));
  
//dp[1][a.at(0)] = 1;
  dp.at(1).at(a.at(0)) = 1;
  for(int i=1; i<n; i++){
    int nexta = a.at(i);
    rep(j, 10){
      dp[i+1][(j+nexta)%10]+=dp[i][j];
      dp[i+1][(j+nexta)%10]%=mod;
      dp[i+1][(j*nexta)%10]+=dp[i][j];
      dp[i+1][(j*nexta)%10]%=mod;
    }
  }
  rep(i,10) cout << dp[n][i] << endl;
  return 0;
}
