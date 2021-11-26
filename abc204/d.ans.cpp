#include <bits/stdc++.h>
using namespace std;

//方針としてはNからいくつか選んで[sigma Ti/2]を超える最小の合計を求める
//任意の数選んだときに取りうる合計値を保存するd[][] をつくっておく
//d[i][j]0からi-1 選んで和をjにできるかの真偽値
int main() {
  int n;
  cin >> n;
  vector<int> t[n];
  for (int i=0; i<n; i++){
    cin >> t[i];
  }
  vector<vector<bool>> dp(n, vector<bool>(n,false));
  for(int i=0; i<n; i++){
    for(int j=0; j<1010; j++){
      if (j - t[i] > 0){
        d[i][j] = d[i-1][j] | d[i][j-t[i]];
      }
    }
  }
  return 0;
}
