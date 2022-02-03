#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans=0;
  for(int i=0; i<n-2; i++){
    if(s.at(i) == 'A' && s.at(i+1) == 'B' && s.at(i+2) == 'C') ans++;
  }
  cout << ans << endl;
  return 0;
}
