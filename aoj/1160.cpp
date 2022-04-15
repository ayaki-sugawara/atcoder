#include <bits/stdc++.h>
using namespace std;

void search(vector<vector<int> > &C, int w, int h, int x, int y) {
    if(0 > x || w <= x) return;
    if(0 > y || h <= y) return;
    if(C.at(y).at(x) == 0) return;
    C.at(y).at(x) = 0;
    search(C, w, h, x+1, y);
    search(C, w, h, x+1, y+1);
    search(C, w, h, x, y+1);
    search(C, w, h, x-1, y+1);
    search(C, w, h, x-1, y);
    search(C, w, h, x-1, y-1);
    search(C, w, h, x, y-1);
    search(C, w, h, x+1, y-1);
    return;
}

int main() {
    while(true){
        int w, h;
        cin >> w >> h;
        if (w == 0 && h == 0) break;
        vector<vector<int> > C(h, vector<int>(w));
        for(int i=0; i<h; i++) {
            for(int j=0; j<w; j++) {
                cin >> C.at(i).at(j);
            }
        }
        int ans = 0;
        for(int i=0; i<h; i++) {
            for(int j=0; j<w; j++) {
                if(C.at(i).at(j) == 1) {
                    search(C, w, h, j, i);
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}