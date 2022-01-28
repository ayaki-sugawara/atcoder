#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, int> S;
  for(int i=0; i<n; i++) {
    string s;
    cin >> s;
    if(S.count(s)) S.at(s)++;
    else S[s] = 1;
  }
  string ans;
  int x=0;
  for(auto p: S) {
    if(x<p.second) {
      ans = p.first;
      x = p.second;
    }
  }
  cout << ans << endl;
  return 0;
}
