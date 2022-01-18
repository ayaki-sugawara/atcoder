#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = 0;
  int n, p;
  cin >> n >> p;
  for(int i=0; i<n; i++){
    int a;
    cin >> a;
    if (a < p) ans++;
  }
  cout << ans << endl;
  return 0;
}
