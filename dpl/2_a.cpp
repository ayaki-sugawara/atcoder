//https://algo-logic.info/bit-dp/
#include <bits/stdc++.h>
using namespace std;

int INF = 1001001001;
int G[20][20];
int dp[50000][20];
int V, E;

void chmin(int &a, const int &b) {
  if(b<a) a = b;
}

int calculate(int S, int v) {
  // Sは到達した点の集合，vは最後に到達した点 返すべきは最短距離
  if(S==0) { //再帰の終了
    if(v==0) return 0;
    else return INF;
  }
  if((S & (1<<v)) == 0) { // もしvが0に含まれていないなら
    return INF;
  }
  if(dp[S][v] != 0) return dp[S][v]; // もしすでにdpがあるなら
  dp[S][v] = INF;
  for(int u=0; u<V; u++) {
    chmin(dp[S][v], calculate(S ^ (1<<v), u) + G[u][v]);    
  }
  return dp[S][v];
}

int main() {
  cin >> V >> E;
  for(int i=0; i<20; i++) {
    for(int j=0; j<20; j++) G[i][j] = INF;
  }
  for(int i=0; i<E; i++) {
    int s, t, d;
    cin >> s >> t >> d;
    G[s][t] = d;    
  }
  
  int ans = calculate((1<<V)-1, 0); //calculate!

  if(ans != INF) cout << ans << endl;
  else cout << -1 << endl;
  return 0;
}