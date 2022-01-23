#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//ll gcd(ll a, ll b) {
//  if(a<b) swap(a, b);
//  if(b==0) return a;
//  else return gcd(b, a%b);
//}

int main() {
  int n;
  cin >> n;
  vector<vector<int>> xy(n);
  set<pair<int, int>> v;
  for(int i=0; i<n; i++) {
    xy.at(i) = vector<int>(2);
    cin >> xy.at(i).at(0) >> xy.at(i).at(1);
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if (i == j) continue;
      int g = gcd(abs(xy.at(i).at(0) - xy.at(j).at(0)), abs(xy.at(i).at(1) - xy.at(j).at(1)));
      pair<int, int> p((xy.at(i).at(0) - xy.at(j).at(0) )/ g, (xy.at(i).at(1) - xy.at(j).at(1) )/ g);
     // if (p.first < 0){
     //   p.first *= -1;
     //   p.second *= -1;
     // }
      v.insert(p);
    }
  }
  cout << v.size()  << endl;

  return 0;
}
