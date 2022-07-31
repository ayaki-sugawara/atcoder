#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, x;
    cin >> n >> x;
    vector<ll> A(n), B(n);
    for(int i=0; i<n; i++) {
        cin >> A.at(i) >> B.at(i);
    }
    ll ans = 1e18;
    ll sum = 0;
    ll b_min = 1e18;
    for(int i=0; i<n; i++) {
        sum += A.at(i) + B.at(i);
        b_min = min<ll>(b_min, B.at(i));
        if(x - i < 1) break;
        ll now = sum + (ll)b_min * (ll)(x - i - 1);
        ans = min(ans, now);
    }
    cout << ans << endl;
    return 0;
}