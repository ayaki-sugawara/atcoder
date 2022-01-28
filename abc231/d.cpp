//違うグループに所属いているときが無理になる
#include <bits/stdc++.h>
using namespace std;

vector<bool> visited(false, 100100100);
bool flag = true;
vector<vector<int>> a;
void dfs(int now, int pre){
  if(visited.at(now)) {
    flag = false;
    return;
  }
  visited.at(now) = true;
  if (a.at(now).size() > 2) {
    flag = false;
    return;
  }
  for(auto next:a.at(now)){
    if (next != pre){
      dfs(next, now);
    }
  }
  return;
}

int main() {
  int n, m;
  cin >> n >> m;
  a.resize(n+1);
  visited.resize(n+1);
  if (n-1<m) flag = false;
  int start;
  for(int i=1; i<m+1; i++) {
    int x, y;
    cin >> x >> y;
    a.at(x).push_back(y);
    a.at(y).push_back(x);
    start = x;
  }
  dfs(start, -1);  
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
