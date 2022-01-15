#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for(int i=0; i<n; i++) {
    int h;
    cin >> h;
    if (h > ans) ans = h;
    else break;
  }
  cout << ans << endl;
  return 0;
}
