#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  long long dp[10][n+1];
  for(int i=1;i<10;i++){
    dp[i][1] = 1;
  }
  for(int i=2;i<n+1; i++){
    for(int j=1; j<10; j++){
      dp[j][i] = dp[j][i-1];
      if(j!=1) dp[j][i] += dp[j-1][i-1];
      if(j!=9) dp[j][i] += dp[j+1][i-1];
      dp[j][i] %= 998244353;
    }
  }
  long long ans = 0;
  for(int i=1;i<10;i++){
    ans += dp[i][n];
    ans %= 998244353;
  }
  cout << ans << endl;
  return 0;
}

