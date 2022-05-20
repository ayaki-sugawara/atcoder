#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i; i<(int)(n); i++)

const int MAX = 1000000;

int main() {
    ll N;
    cin >> N;
    vector<ll> X;
    ll ans = 1001001001;
    for(ll a=1; a<=MAX; a++) {
        for(ll b=MAX; b>=a; b--) {
            cout << a << " " << b << endl;
            ll result = (ll)(a*a*a+a*a*b+a*b*b+b*b*b);
            if(result>=N) {
                ans = min(result, ans);
            } else {
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}