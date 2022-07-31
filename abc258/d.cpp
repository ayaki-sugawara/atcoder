#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> A(n+1), B(n+1);
  for(int i=1; i<n+1; i++) {
    cin >> A.at(i) >> B.at(i);
  }
  ll sum = 0; 
  int b_min = 1001001001;
  ll ans = 1e18;
  for(int i=1; i<n+1; i++) {
    sum += (ll)(A.at(i) + B.at(i));
    b_min = min(b_min, B.at(i));
    if(x - i < 1) continue;
    ans = min<ll>(ans, sum + ll((ll)b_min * (ll)(x - i)));
  }
  cout << ans << endl;
  return 0;
}