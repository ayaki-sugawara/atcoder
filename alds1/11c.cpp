#include <bits/stdc++.h>
using namespace std;
int INF = 1001001001;

int main() {
    int n;
    cin >> n;
    vector<vector<int> > path(n);
    vector<int> distance(n, INF);
    for (int i=0; i<n; i++) {
        int u, k;
        cin >> u >> k;
        u--;
        for(int j=0; j<k; j++) {
            int v;
            cin >> v;
            v--;
            path.at(u).push_back(v);
        }
    }
    deque<pair<int, int> > bfs;
    bfs.push_front(make_pair(0, 0));
    while(!bfs.empty()) {
        int now, count;
        //tie(now, count) = bfs.front();
        now = bfs.front().first;
        count = bfs.front().second;
        bfs.pop_front();
        if(distance.at(now) > count) {
           distance.at(now) = count; 
           for(int i=0; i<path.at(now).size(); i++) {
               bfs.push_back(make_pair(path.at(now).at(i), count+1));
           }
        }
    }
    for(int i=0; i<n; i++) {
        if(distance.at(i) == INF) distance.at(i) = -1;
        cout << i + 1 << " " << distance.at(i) << endl;
    }
    return 0;
}