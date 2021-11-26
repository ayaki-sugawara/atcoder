#include <bits/stdc++.h>
using namespace std;

//方針としてはNからいくつか選んで[sigma Ti/2]を超える最小の合計を求める
//任意の数選んだときに取りうる合計値を保存するd[][] をつくっておく
//d[i][j]0からi-1 選んで和をjにできるかの真偽値
 vector<vector<bool>> d(101, vector<bool>(101010,false));
int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  double sum = 0;
  for (int i=0; i<n; i++){
    cin >> t[i];
    sum += t[i];
  }
  d[0][0] = true;
  d[0][t[0]] = true;
  for(int i=1; i<n; i++){
    for(int j=0; j<101010; j++){
      if (j - t[i] >= 0){
        d[i][j] = d[i-1][j] | d[i-1][j-t.at(i)];
      }
      else {
        d[i][j] = d[i-1][j] | false;
      }
    }
  }
//  for (int i=0; i<n; i++) {
//    for (int j=0; j<30; j++) {
//      cout << d[i][j] << " ";
//    }
//    cout << endl;
//  }
  double half = sum / 2;
  int ans;
  for (int i=0; i<101010; i++){
    if (i > half && d[n-1][i] ){
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
