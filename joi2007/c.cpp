#include<bits/stdc++.h>
using namespace std;

int area(int x1, int y1, int x2, int y2) {
  int ans = pow(x1-x2, 2) + pow(y1-y2, 2);
  return ans;
}

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> P(n);
  for(int i=0; i<n; i++) {
    int x,y;
    cin >> x >> y;
    P.at(i) = make_pair(x, y);
  }
  sort(P.begin(), P.end());
  int ans = 0;
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      int x1, y1, x2, y2;
      tie(x1,y1) = P.at(i);
      tie(x2,y2) = P.at(j);
      pair<int, int> Q = make_pair(x1 + y1 - y2, y1 + x2 - x1);
      pair<int, int> R = make_pair(y1 - y2 + x2, x2 - x1 + y2);
      auto itq = lower_bound(P.begin(), P.end(), Q);
      if (*itq == Q){
        auto itr = lower_bound(P.begin(), P.end(), R);
        if (*itr== R){
          ans = max(ans, area(x1, y1, x2, y2));
        }
      }
    }
  }
  cout << ans << endl;
  return ans;
}
