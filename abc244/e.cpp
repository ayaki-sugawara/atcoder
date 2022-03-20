#include<bits/stdc++.h>
using namespace std;

struct Location {
  int loc;
  int count;
  bool isX; // x count is odd or not;
};

int main() {
  int n, m, k, s, t, x;
  cin >> n >> m >> k >> s >> t >> x;
  vector<vector<int>> path(n);
  for(int i=0; i<m; i++){
    int u, v;
    cin >> u >> v;
    u--; v--;
    path.at(u).push_back(v);
    path.at(v).push_back(u);
  }
  Location start = {s-1, 1, true};  
  queue<Location> list;
  list.push(start);
  long long ans = 0;
  while (!list.empty()){
    Location now = list.front();
    list.pop();
    if (now.count == k+1){
      if(now.loc == t-1 && now.isX == true) {
        ans++;
        ans %= 998244353;
      }
      continue;
    }
    for(auto next: path.at(now.loc)){
      if(next == x-1) {
        Location nextLocation = {next, now.count+1, !now.isX};
        list.push(nextLocation);
      } else {
        Location nextLocation = {next, now.count+1, now.isX};
        list.push(nextLocation);
      }
    }
  }
  cout << ans << endl;
  return 0;
}
