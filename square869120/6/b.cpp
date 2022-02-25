#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<pair<ll, ll>> AB;

ll cal(ll entrance, ll exit){
  ll ans = 0;
  for(int i=0; i<AB.size(); i++){
    ans += AB.at(i).second- AB.at(i).first + abs(AB.at(i).first - entrance) + abs(AB.at(i).second - exit);
  }
  return ans;
}

int main() {
  ll n;
  cin >> n;
  AB.resize(n);
  for(int i=0; i<n; i++){
    ll a, b;
    //a--; b--;
    cin >> a >> b;
    AB.at(i) = make_pair(a, b);
  }
  ll entrance, exit;
  ll ans = 100100100100100100100100;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      entrance = AB.at(i).first;
      exit = AB.at(j).second;
      ans = min(ans, cal(entrance, exit));
    }
  }
  cout << ans << endl;
  return 0;
}
