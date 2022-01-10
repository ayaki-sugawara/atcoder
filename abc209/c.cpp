#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> c(n);
  for(int i=0; i<n; i++) cin >> c[i];
  sort(c.begin(), c.end());
  long long ans=1;
  for(int i=0; i<n; i++) ans = ans * max(0, c[i]-i) % 1000000007;
  cout << ans << endl;
  return 0;
}
