#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> XY;
    for(int i=0; i<N; i++) {
        int x, y;
        cin >> x >> y;
        XY.push_back({x, y});
    }
    string S;
    cin >> S;

    map<int, pair<int, int>> Y;
    for(int i=0; i<N; i++) {
        pair<int, int> xy = XY.at(i);
        if(!Y.count(xy.second)) Y[xy.second] = {INF, -INF};
        if(S.at(i) == 'R') Y.at(xy.second).first = min(Y.at(xy.second).first, xy.first);
        else Y.at(xy.second).second= max(Y.at(xy.second).second, xy.first);
    }
    for(auto item: Y){
        if(item.second.first< item.second.second) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}