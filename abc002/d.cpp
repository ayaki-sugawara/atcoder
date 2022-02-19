#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  int rel[12][12];
  for(int i=0; i<m; i++){
    int x, y;
    cin >> x >> y;
    x--; y--;
    rel[x][y] = 1;
    rel[y][x] = 1;
  }
  int ans = 1;
  for(int i=0; i<(1<<n); i++){
    vector<int> group;
    bool flag = true;
    for(int j=0; j<n; j++){
      if(i>>j & 1){
        group.push_back(j);
      }
    }
    for(auto x: group){
      for(auto y: group) {
        if(x == y) continue;
        if(rel[x][y] != 1) flag = false;
      }
    }
    if(flag) ans = max(ans, (int)group.size());
    
  }
  cout << ans << endl;
  return 0;
}
