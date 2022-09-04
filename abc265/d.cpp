#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n;
  cin >> n;
  ll p, q, r;
  cin >> p >> q >> r;

  ll A[n];
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  vector<ll> S(n);
  S[0] = (ll)A[0];
  for (int i = 1; i < n; i++)
  {
    S[i] = S[i - 1] + (ll)A[i];
  }
  for (int x = 0; x < n; x++)
  {
    auto y = lower_bound(S.begin() + x, S.end(), S[x] + p);
    if (*y - S[x] != p || y == S.end())
      continue;
    else
    {
      auto z = lower_bound(y, S.end(), S[x] + p + q);
      if (*z - *y != q || z == S.end())
        continue;
      else
      {
        auto w = lower_bound(z, S.end(), S[x] + p + q + r);
        if (*w - *z != r || w == S.end())
        {
          continue;
        }
        else
        {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}