#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> A(n); 
    vector<int> X(q);
    for(int i=0; i<n; i++) {
        cin >> A.at(i);
    }    
    for(int i=0; i<q; i++) {
        cin >> X.at(i);
    }
    
    sort(A.begin(), A.end()); // NlogN
    vector<ll> S(n+1);
    S.at(0) = 0;
    for(int i=1; i<n+1; i++) {
        S.at(i) = ll(S.at(i-1) + A.at(i-1));
    }
    
    for(int i=0; i<q; i++) {
        ll ans = 0;
        auto upperI = upper_bound(A.begin(), A.end(), X.at(i));
        int idx = upperI - A.begin();
        ll upper_sum = S.at(n) - S.at(idx);
        ll upper_count = n - idx;
        ans += upper_sum - X.at(i) * upper_count;

        auto lowerI = lower_bound(A.begin(), A.end(), X.at(i));
        int idx2 = lowerI - A.begin();
        ll lower_sum = S.at(idx2);
        ll lower_count = idx2;
        ans += X.at(i) * lower_count - lower_sum;
        cout << ans << endl;
    }
    return 0;
}