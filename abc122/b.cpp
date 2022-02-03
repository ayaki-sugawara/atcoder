#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  int t = 0;
  for(int i=0; i<s.size(); i++){
    if(s.at(i) == 'A' || s.at(i) == 'T' || s.at(i) == 'C' || s.at(i) == 'G'){
      t++;
    } else {
      t = 0;
    }
    ans = max(t, ans);
  }
  cout << ans << endl;
  return 0;
}
