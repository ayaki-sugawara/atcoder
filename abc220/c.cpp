#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int (i)=0; (i)<(int)(n); (i)++) 
using ll = long long;

int main() {
  int n;
  cin >> n;
  int a;
  vector<ll> sum(n);
  rep(i, n) {
    cin >> a;
    if (i==0) sum.at(i) = a;
    else sum.at(i) = sum.at(i-1) + a;
  }
  ll x;
  cin >> x;

  ldiv_t d = ldiv(x, sum.at(n-1));
  ll idx = d.quot;
  

  return 0;
}
