#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a ;
  int min = a;
  cin >> b;
  if (b<a) min=b;
  cin >> c;
  if (c<min) min=c;
  int ans;
  ans = a + b + c - min;
  cout << ans;

  return 0;
}
