#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  ll k;
  cin >> n >> k;
  vector<pair<ll, ll>> v;
  for(int i=1; i<n+1; i++){
    ll a, b;
    cin >> a >> b;
    v.push_back(make_pair(a, b));
  }
  sort(v.begin(), v.end());
  ll ans = 0;
  ll village = 0;
  while(k>0){
    ans += k;
    k = 0;
    while(village < n && v.at(village).first <= ans){
      k+= v.at(village).second;
      village++;
    }
  }
  cout << ans << endl;
  return 0;
}
