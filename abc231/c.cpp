#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for(int i=0; i<n; i++) cin >> a.at(i);
  sort(a.begin(), a.end());
  vector<int> y(q);
  for(int i=0; i<q; i++){
    int x;
    cin >> x;
    auto ans = lower_bound(a.begin(), a.end(), x);
//cout << a.end() - ans + 1 << endl;
    
    y.at(i) = a.end() - ans;
  }
  for(auto z:y) cout << z << endl;
  return 0;
}
