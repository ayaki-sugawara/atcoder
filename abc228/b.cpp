#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a.at(i);
  vector<bool> known(n, false);
  known.at(x-1) = true;
  int ans = 1;
  int next = a.at(x-1);
  while(!known.at(next-1)){
    known.at(next-1) = true;
    next = a.at(next-1);
    ans++;
  }
  cout << ans << endl;
  return 0;
}
