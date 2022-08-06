#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; i++)
using ll = long long;

int main()
{
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  set<int> S;
  multiset<int> SS;

  S.insert(a);
  S.insert(b);
  S.insert(c);
  S.insert(d);
  S.insert(e);
  SS.insert(a);
  SS.insert(b);
  SS.insert(c);
  SS.insert(d);
  SS.insert(e);

  if (S.size() == 2 && (SS.count(a) == 3 || SS.count(a) == 2))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}