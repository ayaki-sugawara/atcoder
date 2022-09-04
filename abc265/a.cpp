#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, y, n;
  cin >> x >> y >> n;
  if (3 * x < y)
  {
    cout << n * x << endl;
  }
  else
  {
    cout << y * (n / 3) + x * (n % 3) << endl;
  }
  return 0;
}