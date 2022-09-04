#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  long long t;
  cin >> n >> m >> t;

  long long A[n];
  for (int i = 1; i < n; i++)
    cin >> A[i];

  int X[m + 1];
  long long Y[m + 1];
  for (int i = 1; i < m + 1; i++)
  {
    cin >> X[i] >> Y[i];
  }

  int bonus = 1;
  for (int i = 1; i < n; i++)
  {
    t -= A[i];
    if (t <= 0)
    {
      cout << "No" << endl;
      return 0;
    }
    if (X[bonus] == i + 1)
    {
      t += Y[bonus];
      bonus++;
    }
  }
  cout << "Yes" << endl;
  return 0;
}