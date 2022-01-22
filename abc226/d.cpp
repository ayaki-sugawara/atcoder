#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
  if(a<b) swap(a, b);
  if(b==0) return a;
  else return gcd(b, a%b);
}

int main() {
  ll n;
  cin >> n;
  vector<vector<ll>> xy(n);
  set<vector<ll>> v;
  for(ll i=0; i<n; i++) {
    xy.at(i) = vector<ll>(2);
    cin >> xy.at(i).at(0) >> xy.at(i).at(1);
  }
  for(ll i=0; i<n; i++){
    for(ll j=i+1; j<n; j++){
      ll g = gcd(abs(xy.at(i).at(0) - xy.at(j).at(0)), abs(xy.at(i).at(1) - xy.at(j).at(1)));
      vector<ll> p = {(xy.at(i).at(0) - xy.at(j).at(0) )/ g, (xy.at(i).at(1) - xy.at(j).at(1) )/ g};
      if (p.at(0) < 0){
        p.at(0) *= -1;
        p.at(1) *= -1;
      }
      v.insert(p);
    }
  }
  cout << v.size() * 2 << endl;

  return 0;
}
