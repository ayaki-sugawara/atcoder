#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(int)n; i++)

int main(){
  int m,n;
  cin >> n >> m;
  ll a[n][m];
  rep(i, n){
    rep(j,m){
      cin >> a[i][j];
    }
  }
  ll ans = 0;
  rep(i,m){
    for(int j=i+1; j<m; j++){
      ll sum = 0;
      rep(k,n){
        sum += max(a[k][i], a[k][j]);
      }
      ans = max(ans, sum);
    }
  }
  cout << ans << endl;
  return 0;
}
