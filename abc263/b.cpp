#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; i++)
using ll = long long;

int P[55];
int ans = 0;
int parent(int i)
{
  if (i == 1)
    return 1;
  else
  {
    ans++;
    return parent(P[i]);
  }
};

int main()
{
  int n;
  cin >> n;
  rep(i, n - 1) cin >> P[i + 2];
  parent(n);
  cout << ans << endl;
  return 0;
}