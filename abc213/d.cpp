#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
vector<vector<int>> path;

void dfs(int now, int pre) {
  ans.push_back(now);
  for(auto to: path[now]) {
    if (to != pre) {
      dfs(to, now);
      ans.push_back(now);
    }
  }
}


int main() {
  int n;
  cin >> n;
  path.resize(n+1);
  for(int i=0; i<n-1; i++){
    int a, b;
    cin >> a >> b;
    path[a].push_back(b);
    path[b].push_back(a);
  }
  for(int i=0; i<n+1; i++){
    sort(path[i].begin(), path[i].end());
  }
  dfs(1, -1);
  for(auto elem: ans) {
    cout << elem << " ";
  }
  cout << endl;

  
  return 0;
}
