#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  set<int> tops;
  vector<int> under(n+5, -1);
  vector<int> pile(n+5, 0);
  vector<int> ans(n+5, -1);
  for(int i=0; i<n; i++) {
    int p;
    cin >> p;
    auto it = tops.lower_bound(p);
    if(it == tops.end()) {
      // 積まない
      tops.insert(p);
      pile.at(p) = 1;
    } else {
      int temp = *it;
      tops.erase(temp);
      tops.insert(p);
      pile.at(p) = pile.at(temp) + 1;
      under.at(p) = temp;

    }
  if(pile.at(p) == k) {
    tops.erase(p);

    int x = p;
    for(int j=0; j<k; j++) {
      ans.at(x) = i+1;
      x = under.at(x);
    }
  }
 }

  for(int i=1; i<n+1; i++) {
    cout << ans.at(i) << endl;
  }
  return 0;
}