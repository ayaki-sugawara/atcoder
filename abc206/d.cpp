#include <bits/stdc++.h>
using namespace std;
using Graph=vector<vector<int>>;

void dfs(int v, vector<bool> &flag, Graph &g){
  if(!flag[v]){return;}
  flag[v]=false;
  for(auto &nx : g[v]) {dfs(nx,flag,g);}
}
//連結成分の個数は最終的な整数の種類
int main() {
  int n;
  int res=0;//整数の種類
  cin >> n;
  vector<int> a(n);
  vector<bool> flag(200005, false);
  Graph g(200005); //200005*0の配列
  for(auto &nx : a){
    cin >> nx;
    if (!flag[nx]){flag[nx]=true;res++;}//初めての値ならflagをtrueにしてresを追加
  }
  int p=0, q=n-1;
  while(p<q){
    g[a[p]].push_back(a[q]);
    g[a[q]].push_back(a[p]);
    p++; q--;
  }
  for (int i=1; i<=200000; i++){
    if(flag[i]){
      res--;
      dfs(i, flag, g);
    }
  }
  cout << res << '\n';
  return 0;
}
