#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int k;
  cin >> s >> k;
  int n = s.size();
  vector<int> a(n);
  for(int i=0;i<n;i++) {
    a.at(i) = s.at(i)=='.';
  }
  int r = 0, sum=0, ans=0;
  for(int i=0;i<n;i++){
    while(r<n && sum+a.at(r) <= k){
      sum+=a.at(r);
      r++;
    }
    ans = max(ans, r-i);
    sum -= a.at(i);
  }
  cout << ans << endl;
  return 0;
}
