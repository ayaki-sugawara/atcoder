#include <bits/stdc++.h>
using namespace std;

bool temp[2000];
vector<vector<int>>G;

void dfs(int v){//始点を渡される
  if(temp[v]) return;//すでに到達済みなら探索終了
  temp[v] = true;//いったことにする
  for(auto vv:G[v]) dfs(vv);//その街から行ける場所をさらに捜索.
}

int main(){
  int n, m;
  cin >> n >> m;
  G.resize(n);
  for(int i=0; i<m; i++){
    int a, b;
    cin >> a >> b;
    G[a-1].push_back(b-1);
  }

  int ans = 0;
  for(int i=0; i<n; i++){
    for (int j=0; j<n; j++) temp[j] = false; //その街から行ける場所の初期化
    dfs(i);
    for (int j=0; j<n; j++) if(temp[j]) ans++;
  }
  cout << ans;
  return 0;
}
