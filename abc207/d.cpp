#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<double, double>> s(n);
  vector<pair<double, double>> t(n);
  for (int i=0; i<n; i++){
    cin >> s[i].first >> s[i].second;
  }
  for (int i=0; i<n; i++){
    cin >> t[i].first >> t[i].second;
  }
  pair<double, double> gs(0,0), gt(0,0);
  for(int i=0; i<n; i++){
    gs.first += s[i].first;
    gs.second += s[i].second;
    gt.first += t[i].first;
    gt.second += t[i].second;
  }
  gs.first /= n;
  gs.second /= n;
  gt.first /= n;
  gt.second /= n;
  cout << "sの重心は " << gs.first << " " << gs.second << endl;
  cout << "tの重心は " << gt.first << " " << gt.second << endl;

  return 0;
}
