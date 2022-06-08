#include <bits/stdc++.h>
using namespace std;

const int INF = 1001001001;
int main() {
    map<int, pair<int, int>> Y;
    string N;
    cin >> N;
    vector<int> Y_list;
    for(int i=0; i<N.size(); i++) {
        int x, y;
        cin >> x >> y;
        if(Y.count(y)) {
            Y.at(y) = {INF, -INF};
            Y_list.push_back(y);
        }
        if(N.at(i)=='R') Y[y].first = min(x, Y[y].first);
        else Y[y].second = max(x, Y[y].second);
    }
    for(auto s: Y_list){
        pair<int, int> S = Y.at(s);
        if(S.first < S.second) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}