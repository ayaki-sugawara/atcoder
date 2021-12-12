#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int t;
  vector<pair<int, int>> s(n);
  for (int i=0; i<n; i++){
    int l, r;
    cin >> t >> l >> r;
    if(t==2) r=r-1;
    if(t==3) l=l+1;
    if(t==4) {l=l+1;r=r-1;}
    s[i].first = l;
    s[i].second = r;
    cout << l << r << endl;
  }
  int ans=0;
  for(int i=0; i<n-1; i++){
    for (int j=i+1; j<n; j++){
      if (s[i].second >= s[j].first && s[i].first <= s[j].second){
        ans++;
        cout << "i: " << i << " j: " << j << endl;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
