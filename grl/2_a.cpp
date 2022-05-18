#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct UnionFind {
  vector<int> par;

  UnionFind(int N): par(N) {
    for(int i=0; i<N; i++) par[i] = i;
  }
  
  int root(int x) {
    if(par[x] == x) return x;
    else return par[x] = root(par[x]);
  }
  
  void unite(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    if (rx==ry) return;
    par[rx] = ry;
  }
  
  bool same(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    return rx == ry;
  }
};

struct Edge {
  int w;
  pair<int, int> uv;
  
};

bool operator> (const Edge &edge1, const Edge &edge2) {
  return edge1.w > edge2.w;
}

//using P = vector<Edge>;

//using Edge = pair<int, pair<int, int>>;

int main() {
  int V, E;
  cin >> V >> E;
  UnionFind uf(V);
  priority_queue<Edge, vector<Edge>, greater<Edge>> pq;
  for (int i=0; i<E; i++) {
    int s, t, w;
    cin >> s >> t >> w;
    pq.push({w, {min(s,t), max(s, t)}});
  }
  int count = 0;
  int all_weight = 0;
  while(count < V-1) {
    Edge p = pq.top();
    pq.pop();
    //cout << p.w << " " << p.uv.first << " " << p.uv.second << endl;
    if(!uf.same(p.uv.first, p.uv.second)) {
      count++; all_weight += p.w;
      uf.unite(p.uv.first, p.uv.second);
    }
  }
  cout << all_weight << endl;
  return 0;
}