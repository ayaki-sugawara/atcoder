#include<bits/stdc++.h>
using namespace std;
int INF = 1001001001;

struct P {
    int x;
    int y;
    int d;
    pair<int, int> prev;
};

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> S(H+2, vector<int>(W+2, 0));
    for(int h=1; h<H+1; h++) {
        for(int w=1; w<W+1; w++) {
            char s;
            cin >> s;
            if(s == '.') S.at(h).at(w) = 1;
            //else S.at(h).at(w) = 0;
        }
    }

    vector<vector<int>> d(H+2, vector<int>(W+2, INF)); // store distance from start
    vector<vector<pair<int, int>>> p(H+2, vector<pair<int, int>>(W+2)); // store prev position

    queue<P> q; 
    q.push({1, 1, 0, {0, 0}}); // push start position
    vector<pair<int, int>> move = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    
    while(!q.empty()) {
        P now = q.front();
        q.pop();
        
        if(!S.at(now.y).at(now.x)) continue; // if this block is black
        
        if (d.at(now.y).at(now.x) > now.d) { // if distance from start is less than stored value
            d.at(now.y).at(now.x) = now.d;
            p.at(now.y).at(now.x) = now.prev;
            
            for(auto m: move) {
                q.push({now.x + m.first, now.y + m.second, now.d + 1, {now.y, now.x}});
            }
        }
    }
    
    if(d.at(H).at(W) == INF) {
        cout << -1 << endl;
        return 0;
    }
    
    pair<int, int> now =  {H, W};
    pair<int, int> init =  {0, 0};
    while(now != init) {
        S.at(now.first).at(now.second) = 0;
        now = p.at(now.first).at(now.second);
    }
    int ans = 0;
    for(int h=0; h<H+2; h++) {
        for(int w=0; w<W+2; w++) {
            if (S.at(h).at(w)) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}