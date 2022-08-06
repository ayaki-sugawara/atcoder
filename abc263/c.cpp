#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; i++)
using ll = long long;

int n, m;
void V(deque<int> d)
{
  if (d.size() == n)
  {
    while (!d.empty())
    {
      cout << d.front() << " ";
      d.pop_front();
    }
    cout << endl;
  }
  else
  {
    int back = d.back();
    for (int i = back + 1; i < m + 1; i++)
    {
      deque e = d;
      e.push_back(i);
      V(e);
    }
  }
};

int main()
{
  cin >> n >> m;
  for (int i = 1; i < m + 1; i++)
  {
    deque a = {i};
    V(a);
  }
  return 0;
}