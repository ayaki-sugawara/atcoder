#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &path, int now, int &timestamp, vector<int> &d, vector<int> &f) {
    d.at(now) = timestamp;
    timestamp++;
    for(auto v: path.at(now)) {
        if (d.at(v) == 0) {
            dfs(path, v, timestamp, d, f);
        }
    }
    f.at(now) = timestamp;
    timestamp++;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> U(n);
    vector<bool> visited(n);
    vector<int> d(n,0), f(n,0);
    for(int i=0; i<n; i++) {
        int u, k;
        cin >> u;
        u--;
        cin >> k;
        for(int j=0; j<k; j++) {
            int v;
            cin >> v;
            v--;
            U.at(i).push_back(v);
        }
    }
    int timestamp = 1;
    dfs(U, 0, timestamp, d, f);
    for(int i=0; i<n; i++) {
        cout << i+1 << " " << d.at(i) << " " << f.at(i) << endl;
    }
    return 0;
}