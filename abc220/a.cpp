#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  if (b/c > a/c) cout << c * (b/c) << endl;
  else {
    if (a%c==0) cout << a << endl;
    else cout << -1 << endl;
  }
  return 0;
}
