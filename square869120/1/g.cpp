#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll INF = 100100100100100;

ll G[20][20];
ll Time[20][20];
ll dp[20][20];
int N, M;

ll search(int S, int v, int f, ll now) {
    if(S == 0) return 0;
    if((S >> v) & 1 != 1) return INF;
    if(Time[f][v] < now) return INF;
    if(dp[S][v] != 0) return dp[S][v];

    dp[S][v] = INF;
    for(int u=0; u<N; u++) {
        for(int w=0; w<N; w++) {
            dp[S][v] = min(dp[S][v], search(S^(1<<v), u, w, now-Time[u][w]) + G[u][w]);
        }
    }
    return dp[S][v];
}

int main() {
    cin >> N >> M;
    for(int i=0; i<20; i++) {
        for(int j=0; j<20; j++) G[i][j] = INF;
    }
    for(int i=0; i<M; i++) {
        int s, t;
        ll d, time;
        cin >> s >> t >> d >> time;
        s--; t--;
        G[s][t] = d;
        G[t][s] = d;
        Time[s][t] = time;
        Time[t][s] = time;
    }    
    search((1<<N)-1, 1, )
    
    return 0;
}


/*
 * 
最短経路はbfs使えばよい？
店は0indexにする
dp[S][v] = 最小時間
function(集合S(:到達した町のリスト), v(:最後に到達した町), now(:現在時刻), f: どの町から最後来たか)
    再帰の終点
    if S == 0 return 0;
    Sにvがあるか
    if (S >> v) & 1 != 1 return INF;
    if Time[f][v] < now return INF;
    if dp[S][v] != 0 return dp[S][v]
    初期化
    dp[S][v] = INF
    dp[S][v] = min(1<=u<=N)(dp[S-{v}][u]+G[u][v])
    return dp[S][v]
*/