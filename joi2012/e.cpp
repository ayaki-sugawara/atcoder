#include <bits/stdc++.h>
using namespace std;

int main() {
    int W, H;
    cin >> W >> H;
    vector<vector<int>> A(H+2, vector<int>(W+2, 0));
    vector<vector<int>> isvisited(H+2, vector<int>(W+2, 0));
    vector<vector<int>> t(H+2, vector<int>(W+2, 0));
    for(int h=1; h<H+1; h++) {
        for(int w=1; w<W+1; w++) {
            int b;
            cin >> b;
            if(b) A.at(h).at(w) = 1;
        }
    }
    //from 2,2
    vector<pair<int, int>> move1 = {{-1,0},{-1,-1},{0,-1},{1,0},{0,1},{-1,1}};
    //from 3,3
    vector<pair<int, int>> move2 = {{-1,0},{0,-1},{1,-1},{1,0},{1,1},{0,1}};
    int ans = 0;
    //bfs search
    queue<pair<int, int>> root;
    root.push({0,0});
    while(!root.empty()) {
        pair<int, int> now = root.front();
        root.pop();

        if(A.at(now.first).at(now.second)) { 
            t.at(now.first).at(now.second)++;
            ans++; 
            continue;
        }
        
        if(isvisited.at(now.first).at(now.second)) continue;
        isvisited.at(now.first).at(now.second) = true;
        
        if(now.first%2 == 0) {
            for(auto mv:move1) {
                if(-1<now.first+mv.second&& now.first+mv.second< H+2 && -1<now.second+mv.first && now.second+mv.first<W+2) {
                    root.push({now.first+mv.second, now.second+mv.first});
                }
            }
        } else {
            for(auto mv:move2) {
                if(-1<now.first+mv.second&& now.first+mv.second< H+2 && -1<now.second+mv.first && now.second+mv.first<W+2) {
                    root.push({now.first+mv.second, now.second+mv.first});
                }
            }
        }
    }
//    for(int h=0; h<H+2; h++) {
//        for(int w=0; w<W+2; w++) {
//            cout << t.at(h).at(w) << " ";
//        }
//        cout << endl;
//    }
    cout << ans << endl;
    return 0;
}