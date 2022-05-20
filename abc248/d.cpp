#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> dict(200050); // dict[i]には Ax = iなるxを保存していく
    for(int i=0; i<N; i++) {
        int a;
        cin >> a;
        dict.at(a).push_back(i);
    }
    int Q;
    cin >> Q;
    for(int i=0; i<Q; i++) {
        int l, r, x;
        cin >> l >> r >> x;
        l--; r--;
        cout << upper_bound(dict[x].begin(), dict[x].end(), r) - lower_bound(dict[x].begin(), dict[x].end(), l) << endl; 
    }
    return 0;
}