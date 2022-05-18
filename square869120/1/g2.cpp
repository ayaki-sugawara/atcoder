#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;

pair<ll, ll> dp[1 << 16][16];
int N, M;
struct Graph {
    ll distance;
    ll time; //閉じる時間
};

Graph G[16][16];
pair<ll, ll> DP(ll S, int end) {
    if(S == 0) {
        if(end==0) return {0, 1};
        else return {INF, 0};   
    }
    
    if(((S >> end) & 1) == 0) {
        return {INF, 0};
    }

    pair<ll, ll> &now = dp[S][end]; 
    //メモに書かれてたら
    if(now.first != 0) return now;
    
    now = {INF, 0};
    for(int u=0; u<N; u++) {
        pair<ll, ll> pre = DP(S^(1<<end), u);
        pre.first += G[u][end].distance;
        if(pre.first <= G[u][end].time) { //制限時間内に通れる
            if(now.first > pre.first) {
                now = pre;
            } else if (now.first == pre.first) {
                now.second += pre.second;
            }
        }

    }

    return now;
}

int main() {
    cin >> N >> M;
    for(int i=0; i<16; i++) {
        for(int j=0; j<16; j++) {
            G[i][j] = {INF, 0};
        }
    }
    for(int m=0; m<M; m++) {
        int s, t;
        ll d, time;
        cin >> s >> t >> d >> time;
        s--; t--;
        G[s][t] = {d, time};
        G[t][s] = {d, time};
    }
    pair<ll, ll> ans = DP((1<<N)-1, 0);
    if(ans.first != INF) {
        cout << ans.first << " " << ans.second << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}