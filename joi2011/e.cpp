#include <bits/stdc++.h>
using namespace std;
int INF = 1001001001;

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    // H: height W: width N: number of factory
    vector<string> A(H);
    for(int i=0; i<H+1; i++) {
        cin >> A.at(i);
    }
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            if(A.at(i).at(j) == 'S') A.at(i).at(j) = '0';
        }
    }   
    int ans = 0;
    //for N回
    for(int start=0; start<N; start++){
        //地図のコピー H * W
        vector<vector<int>> m(H, vector<int>(W, INF));
//        for (int i=0; i<H; i++) {
//            for (int j=0; j<W; j++) {
//                if(A.at(i).at(j) == 'X') {
//                    map.at(i).at(j) = ;
//                } else {
//                    map.at(i).at(j) = true;
//                }
//            }
//        }
        //start と goalの設定 H * W
        pair<int, int> s;
        for(int i=0; i<H; i++) {
            for(int j=0; j<W; j++) {
                if(A.at(i).at(j) == char(start)) {
                    m.at(i).at(j) = 0;
                    s = make_pair(i, j);
                }
            }
        }   
        //最短ルートの探索 H * W * 2
        queue<pair<int, int>> root;
        root.push(s);
        while(!root.empty()) {
            pair<int, int> now = root.front();
            root.pop();
            if(A.at(now.first).at(now.second) == 'X') continue;
            if(A.at(now.first).at(now.second) == char(start+1)) {
                // arrive at goal
                ans += m.at(now.first).at(now.second);   
            }
            if (now.first)
            
        }
    //所要時間の加算
    }
    return 0;
}