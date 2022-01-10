#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, x, y;
  cin >> n >> a >> x >> y;
  int ans = 0;
  ans = n * x;
  if (n > a){
    ans = ans - (n-a) * (x-y);
  }
  cout << ans << endl;
  return 0;
}
