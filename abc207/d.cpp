#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int>> s(n);
  vector<pair<int>> t(n);
  for (int i=0; i<n; i++){
    cin >> s[i].first >> s[i].second;
  }
  for (int i=0; i<n; i++){
    cin >> t[i].first >> t[i].second;
  }
  return 0;
}
