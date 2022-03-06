#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  long long dp[10][2];
  for(int i=1; i<10; i++){
    dp[i][0] = 1;
  }

  for(int j=0; j<n-1; j++){
    for(int i=1; i<10; i++){
      dp[i][1] = dp[i][0];
      if(i!=1) dp[i][1] += dp[i-1][0];
      if(i!=9) dp[i][1] += dp[i+1][0];
    }

    for(int i=1; i<10; i++){
      dp[i][0] = dp[i][1] % 998244353;
    }
    
  }
  long long ans =0;
  for(int i=1; i<10; i++){
    ans += dp[i][0];
    ans %= 998244353;
  }
  cout << ans << endl;
  return 0;
}
