#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  map<int, int> count;
  map<int, map<int, int>> dp;
  for(int i=0; i<n; i++) {
    int a;
    cin >> a;
    if (count.count(a)) count.at(a)++;
    else count[a] = 1;
    dp[a][count.at(a)] = i;
  }
  for(int i=0; i<q; i++) {
    int x, k;
    cin >> x >> k;
    if (dp.count(x) && dp.at(x).count(k)) {
      cout << dp.at(x).at(k) + 1 << endl;
    } else {
      cout << -1 << endl;
    }
  }  

  return 0;
}
