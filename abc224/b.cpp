#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(int)(n); i++)

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<ll>> a(h, vector<ll>(w));
  rep(i,h){
    rep(j, w) cin >> a.at(i).at(j);
  }
  for(int i1=0; i1<h-1; i1++){
    for(int i2=i1; i2<h; i2++){
      for(int j1=0; j1<w-1; j1++){
        for(int j2=j1; j2<w; j2++){
          if (a.at(i1).at(j1) + a.at(i2).at(j2) > a.at(i2).at(j1) + a.at(i1).at(j2)){ cout << "No" << endl; return 0;}
        }
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
