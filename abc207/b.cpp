#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int k = c * d - b;
  if (k <= 0){
    cout << -1 << endl;
  }
  else{
    if ( a % k == 0){
      cout << a/k << endl;
    }
    else {
      cout << a/k + 1 << endl;
    }
  }
  return 0;
}
