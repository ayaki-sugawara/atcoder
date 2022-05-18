#include <bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;
int main() {
  long long m, n;
  cin >> m >> n;
  long long ans = m;
  n--;
  while(n>0){
    ans =  ans * m;
    ans %= mod;
    n--;
  }
  cout << ans << endl;
  return 0;
}