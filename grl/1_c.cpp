#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF  = 1LL << 60;
ll d[100][100];
void warshall_floyd(int n) {
  for(int k=0; k<n; k++) {
    for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
}
int main() {
  int V, E;
  cin >> V >> E;
  for(int i=0; i<V; i++) {
    for(int j=0; j<V; j++) {
      if(i==j) continue;
      d[i][j] = INF;
    }
  }
  for(int e=0; e<E; e++) {
    int s, t;
    ll dis;
    cin >> s >> t >> dis;
    d[s][t] = dis;
  }
  warshall_floyd(V);
  for(int i=0; i<V; i++) {
    if(d[i][i] < 0) {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }
  for(int i=0; i<V; i++) {
    for(int j=0; j<V; j++) {
      if(d[i][j] != INF) cout << d[i][j] << " ";
      else cout << "INF ";
    }
    cout << endl;
  }
  
  return 0;
}