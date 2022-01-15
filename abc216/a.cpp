#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  scanf("%d.%d", &x, &y);
  if(y<3) cout << x << "-" << endl;
  else if(y<7) cout << x << endl;
  else cout << x << "+" << endl;
  return 0;
}
