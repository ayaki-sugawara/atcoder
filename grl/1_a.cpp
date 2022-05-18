#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct Edge {
  ll to;
  ll cost;
};

using Graph = vector<vector<Edge>>;
using P = pair<ll, int>; // lowest cost, edge
const ll INF = 1LL << 60;

void dijkstra(const Graph &G, int s, vector<ll> &dis) {
  int N = G.size();
  dis.resize(N, INF);
  priority_queue<P, vector<P>, greater<P>> pq;
  dis[s] = 0;
  pq.push({dis[s], s});
  while(!pq.empty()) {
    P p = pq.top();
    pq.pop();
    int v = p.second;
    if(dis[v] < p.first) continue;
    for(auto &e: G[v]) {
      if(dis[e.to] > dis[v] + e.cost) {
        dis[e.to] = dis[v] + e.cost;
        pq.push({dis[e.to], e.to});
      }
    }
  }
}
int main() {
  int V, E, r;
  cin >> V >> E >> r;
  Graph G(V);
  for(int i=0; i<E; i++) {
    int s, t, d;
    cin >> s >> t >> d;
    G.at(s).push_back({t, d});
  }
  vector<ll> dis;
  dijkstra(G, r, dis);
  for(int i=0; i<V; i++) {
    if(dis[i] != INF) cout << dis[i] << endl;
    else cout << "INF" << endl;
  }
  return 0;
}