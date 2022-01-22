#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> t(n);
  vector<vector<int>> a(n);
  for(int i=0; i<n; i++) {
    int k;
    cin >> t.at(i) >> k;
    a.at(i) = vector<int>(k);
    for(int j=0; j<k; j++) {
      cin >> a.at(i).at(j);
      a.at(i).at(j)--;
    }
  }
  vector<bool> need(n);
  need[n-1] = true;
  long long ans=0;
  for(int i=n-1; i>-1; i--){
    if(need[i]){
      for(auto j: a[i]) need[j] = true;
    }
  }
  for(int i=0; i<n; i++) if(need[i]) ans += t[i];
  cout << ans << endl;
  return 0;
}
