#include <bits/stdc++.h>
using namespace std;
int INF = 1001001001;

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    vector<vector<int>> A(H+2, vector<int>(W+2, -1));
    // prepare map
    for(int i=1; i<H+1; i++) {
        string a;
        cin >> a;
        A.at(i).at(0) = -1;
        for(int j=0; j<W; j++) {
            if(a.at(j) == 'X') A.at(i).at(j+1) = -1;
            else if (a.at(j) == 'S') A.at(i).at(j+1) = 0;
            else if (a.at(j) == '.') A.at(i).at(j+1) = INF;
            else A.at(i).at(j+1) = int(a.at(j));
        }
        A.at(i).at(H+1) = -1;
    }
    for(int i=0; i<H+2; i++) {
        for(int j=0; j<W+2; j++) {
            cout << A.at(i).at(j);
        }
        cout << endl;
    }
    return 0;
    int ans = 0;
    for(int start=0; start<N; start++) {
        queue<pair<int, int>> root;
        pair<int, int> s, e;
        vector<vector<int>> m(H+2, vector<int>(W+2, INF));
        //setup start and goal point
        for(int h=1; h<H+1; h++) {
            for(int w=1; w<W+1; w++) {
                if(A.at(h).at(w) == start) s = make_pair(h, w);
                if(A.at(h).at(w) == start+1) e = make_pair(h, w);
            }
        } 
        m.at(s.first).at(s.second) = 0;
        root.push(s);
        //start bfs
        while(!root.empty()) {
            pair<int, int> now = root.front();
            int time = m.at(now.first).at(now.second);
            root.pop();
            cout << now.first << " " << now.second << endl;
            if(now == e) ans += m.at(now.first).at(now.second);
            if(A.at(now.first).at(now.second) == -1) continue;
            time++;
            m.at(now.first+1).at(now.second) = min(time, m.at(now.first+1).at(now.second));
            m.at(now.first-1).at(now.second) = time;
            m.at(now.first).at(now.second+1) = time;
            m.at(now.first).at(now.second-1) = time;
            
            root.push(make_pair(now.first+1, now.second));
            root.push(make_pair(now.first-1, now.second));
            root.push(make_pair(now.first, now.second+1));
            root.push(make_pair(now.first, now.second-1));
        }
    }
    cout << ans << endl;
    return 0;
}