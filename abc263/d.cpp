#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; i++)
using ll = long long;

int main()
{
  ll n, l, r;
  cin >> n >> l >> r;
  ll a[n];
  ll s[n];
  ll p[n];

  int x, y;
  s[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    s[i] = s[i - 1] + a[i];
  }
  for (int i = n - 1; i >= 0; i--)
  {
    if (s[i] > l * (i + 1))
    {
      x =
    }
  }
  return 0;
}