#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, k, n) for(int i=(int)(k); i<(int)(n); i++)
const int MAX = 5000000;
const int MOD = 1000000007;

ll fact[MAX];
ll inv[MAX];
ll inv_fact[MAX];

ll calc_inv(ll a, ll mod) {
    ll result = 1;
    while(mod > 0) {
        if((mod&1) == 1) {
            result = result * a % MOD;
        }
        mod = mod >> 1;
        a = a * a % MOD;
    }  
    return result;
}

void init() {
    fact[0] = 1;
    fact[1] = 1;
    rep(i, 2, MAX) fact[i] = (i * fact[i-1]) % MOD;
    rep(i, 1, MAX) inv[i] = calc_inv(i, MOD-2);
    //inv[0] = 1;
    //inv[1] = 1;
    //rep(i, 2, MAX) {
    //    inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
    //}
    
    inv_fact[0] = 1;
    inv_fact[1] = 1;
    rep(i, 2, MAX) {
        inv_fact[i] = inv[i] * inv_fact[i-1] % MOD;
    }
}

ll nCk(int n, int k) {
    ll x = fact[n];
    ll y = inv_fact[n-k];
    ll z = inv_fact[k];
    return x * ((y * z) % MOD) % MOD;
}

int main() {
    int W, H;
    cin >> H >> W;
    init();
    H--; W--;
    cout << nCk(W+H, H) << endl;
    return 0;
}