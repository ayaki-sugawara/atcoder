#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll area(pair<ll, ll> a, pair<ll, ll> b, pair<ll, ll> c){
  pair<ll, ll> ab = make_pair(b.first - a.first, b.second - a.second);
  pair<ll, ll> ac = make_pair(c.first - a.first, c.second - a.second);

  ll abac = ab.first * ac.second - ab.second * ac.first;
  //if (abac < 0) abac *= -1;
  //ll s = (0.5) * abac;
  //return s;
  return abac;
}

int main() {
  int n;
  cin >> n;
  vector<pair<ll, ll>> xy(n);
  for(int i=0; i<n; i++) {
    ll x, y;
    cin >> x >> y;
    xy.at(i) = make_pair(x,y);
  }
  ll ans = 0;
  for(int i=0; i<n-2; i++){
    for(int j=i+1; j<n-1; j++){
      for(int k=j+1; k<n; k++){
        ll s= area(xy.at(i), xy.at(j), xy.at(k));
        if(s != 0) ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
