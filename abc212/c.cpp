#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int ans = 1001001001;
  int x = 0;
  int y = 0;
  int diff;
  while(x<n && y<m) {
    diff = a[x] - b[y];
    if (diff <= 0) {
      diff = -diff;
      x++;
    }
    else{
      y++;
    }
    if (diff < ans) ans = diff;
  }
  cout << ans << endl;
  return 0;
}
