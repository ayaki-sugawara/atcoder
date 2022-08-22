#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) \
  for (int i = 0; i < (int)(n); i++)

using ll = long long;

int main()
{
  int n, x;
  cin >> n >> x;
  ll a[n], b[n];
  rep(i, n) cin >> a[i] >> b[i];

  ll minB = 1e20;
  ll sumClearedAB = 0;
  ll minSumClear = 1e20;

  rep(i, n)
  {
    // iまでクリア
    if (b[i] < minB)
      minB = b[i];
    int leftClearNum = x - (i + 1);
    if (leftClearNum < 0)
      break;
    sumClearedAB += a[i] + b[i];
    ll needTime = sumClearedAB + minB * (ll)leftClearNum;
    minSumClear = min(needTime, minSumClear);
  }
  cout << minSumClear << endl;

  return 0;
}