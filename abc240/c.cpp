#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  bool dp[101][10001] = {false};
  dp[0][0] = true;
  for(int i=1; i<n+1; i++){
    int a, b;
    cin >> a >> b;
    for(int j=0; j<10001; j++){
      if(dp[i-1][j]){
        if(a + j <= 10000) dp[i][a+j] = true;
        if(b + j <= 10000) dp[i][b+j] = true;
      }
    }
  }
  if(dp[n][x]) {
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
  return 0;
}
