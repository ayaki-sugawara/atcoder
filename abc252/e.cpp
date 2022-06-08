#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1LL<<60;

struct Edge {
    int to;
    ll cost;
    int road_idx;
};
using P = pair<ll, pair<int, int>>; //仮の最短距離、頂点, road

using Graph = vector<vector<Edge>>;
int N, M;
vector<int> roads;

void dijkstra(const Graph &G, int s, vector<ll> &dis) {
    priority_queue<P, vector<P>, greater<P>> pq;
    dis[s] = 0;
    pq.push({dis[s], {s, -1}});
    while(!pq.empty()) {
        P p = pq.top();
        pq.pop();
        int now = p.second.first;
        if(dis[now] < p.first) continue;
        roads.push_back(p.second.second);
        for(auto &e: G[now]) {
            if(dis[e.to] > dis[now] + e.cost) {
                dis[e.to] = dis[now] + e.cost;
                pq.push({dis[e.to], {e.to, e.road_idx}});
            } 
        }
    }
}

int main() {
    cin >> N >> M;
    Graph G(N);
    for(int i=0; i<M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        G.at(a).push_back({b, c, i});
        G.at(b).push_back({a, c, i});
    }
    vector<ll> distance(N, INF);
    dijkstra(G, 0, distance);
    for(int i=1; i<N; i++) {
        cout << roads.at(i) + 1 << " ";
    }
    //road index starts 0
    return 0;
}