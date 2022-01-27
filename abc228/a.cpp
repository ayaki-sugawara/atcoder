#include <bits/stdc++.h>
using namespace std;

int main() {
  int s, t, x;
  bool flag = false;
  cin >> s >> t >> x;
  if (s<t) {
    if(s<=x && x<t) flag = true;
  }
  else{
    if(s<=x || x<t) flag = true;
  }
  if (flag) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
