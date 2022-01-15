#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> s(n), t(n);
  for(int i=0; i<n; i++) {
    cin >> s.at(i);
  }
  for(int i=0; i<n; i++) {
    cin >> t.at(i);
  }
  vector<int> f(n);
  f.at(0) = t.at(0);
  for(int i=1; i<n; i++) f.at(i) = min(f.at(i-1)+s.at(i-1), t.at(i));
  f.at(0) = min(f.at(n-1)+s.at(n-1), t.at(0));
  for(int i=1; i<n; i++) f.at(i) = min(f.at(i-1)+s.at(i-1), t.at(i));
  for(auto elem: f) cout << elem << endl;
  return 0;
}
