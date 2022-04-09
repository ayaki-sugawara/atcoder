#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<int> S(n);
    for(int i=0; i<n; i++) cin >> S.at(i);
    cin >> q;
    vector<int> T(q);
    for(int i=0; i<q; i++) cin >> T.at(i);
    int ans = 0;
    for(int i=0; i<q; i++) {
        vector<int>::iterator s = lower_bound(S.begin(), S.end(), T.at(i));
        if(*s == T.at(i)) ans++;
    }
    cout << ans << endl;
    return 0;
}