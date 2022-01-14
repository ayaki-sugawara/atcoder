#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  int n;
  ll a;
  ll ans1;
  int ans2 = 0;
  map<ll, int> p;
  cin >> n;
  for(int i=0; i<n; i++){
 	cin >> a;
    if(p.count(a)){
      p.at(a) += 1;
    } else {
      p[a] = 1;
    }
  }
  for(auto elem: p) {
    if(ans2 < elem.second) {
      ans1 = elem.first;
      ans2 = elem.second;
    }
  }
  cout << ans1 << " " << ans2 << endl;
  return 0;
}
