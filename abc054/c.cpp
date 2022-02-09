#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> path;
int n, m;
int ans = 0;

void dfs(int now, vector<bool> visited){
  visited.at(now) = true;
  for(auto next:path.at(now)){
    if(visited.at(next)) continue;
    dfs(next, visited);
  }
  for(auto town: visited){
    if(!town) return;
  }
  ans++;
  return;
}

int main() {
  cin >> n >> m;
  path.resize(n);
  for(int i=0; i<m; i++){
    int a, b;
    cin >> a >> b;
    a--; b--;
    path.at(a).push_back(b);
    path.at(b).push_back(a);
  }
  vector<bool> visited(n, false);
  visited.at(0) = true;
  dfs(0, visited);
  cout << ans << endl;
  return 0;
}
