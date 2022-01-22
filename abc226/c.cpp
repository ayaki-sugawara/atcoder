#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<ll> dp(n+1, 0);
  dp.at(0) = 0;
  for(int i=0; i<n; i++){
    ll t, k;
    cin >> t >> k;
    dp.at(i+1) = t;
    if (k == 0) {
      continue;
    } 
    for(int j=0; j<k; j++) {
      int a;
      cin >> a;
      dp.at(i+1)+=dp.at(a);
    }
  }
  cout << dp.at(n) << endl;

  return 0;
}
