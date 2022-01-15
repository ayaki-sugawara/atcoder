#include <bits/stdc++.h>
using namespace std;

int main() {
  int s, t;
  cin >> s >> t;
  int ans = 0;
  for(int a = 0; a < s+1; a++){
    for (int b=0; b < s+1; b++) {
      for(int c=0; c<s+1; c++) {
        if (a+b+c<s+1 && a*b*c<t+1) ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
