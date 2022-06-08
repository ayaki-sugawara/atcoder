#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    pair<int, int> a;
    pair<int, int> b;
    bool first = true;
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            char s;
            cin >> s;
            if(s=='o' && first) {
                a = {i, j};
                first = false;
            }
            else if(s=='o') b = {i, j};
        }
    }
    int ans = abs(a.first-b.first) + abs(a.second - b.second);
    cout << ans << endl;
    return 0;
}