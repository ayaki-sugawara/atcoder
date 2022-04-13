#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    int sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    //sy--; sx--; gy--; gx--;
    pair<int, int> start = make_pair(sy, sx);
    pair<int, int> goal = make_pair(gy, gx);
    vector<vector<char>> maze(R+1, vector<char>(C+1, '#'));
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            char x;
            cin >> x;
            if(x == '.') maze.at(i+1).at(j+1) = '.';
        }
    }
    queue<pair<int, pair<int, int>>> q;
    q.push(make_pair(0, start));
    while(!q.empty()) {
        pair<int, pair<int, int>> now = q.front();
        q.pop();
        int count = now.first;
        pair<int, int> now_position = now.second;
        if(now_position == goal) {
            cout << count << endl;
            break;
        }
        if(maze.at(now_position.first).at(now_position.second) == '#') {
            continue;
        }
        q.push(make_pair(count+1, make_pair(now_position.first+1, now_position.second)));
        q.push(make_pair(count+1, make_pair(now_position.first, now_position.second+1)));
        q.push(make_pair(count+1, make_pair(now_position.first-1, now_position.second)));
        q.push(make_pair(count+1, make_pair(now_position.first, now_position.second-1)));

        maze.at(now_position.first).at(now_position.second) = '#';
    }
    return 0;
}