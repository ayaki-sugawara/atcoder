#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ad;

void dfs(int pre, int now, int count){
  return ;
}

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> X(n);

  for(int i=0; i<n; i++){
    cin >> X.at(i);
  }
  ad.resize(n);
  for(int i=0; i<n; i++){
    int a, b;
    cin >> a >> b;
    a--; b--;
    ad.at(a).push_back(b);
    ad.at(b).push_back(a);
  }
  for(int i=0; i<q; i++){
    int v, k;
    cin >> v >> k;
    solve(v,k);
  }
  return 0;

}
