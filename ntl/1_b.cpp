#include <bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;
int main() {
  long long m, n;
  cin >> m >> n;
  long long ans = 1;
  while(n>0) {
    if((n&1) == 1) {
      ans = ans * m % mod;
    }
    m = m * m % mod;
    n = n >> 1;
  }
  cout << ans << endl;
  return 0;
}