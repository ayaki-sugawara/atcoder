#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    if(a%b==0) return b; 
    else return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
    return a * b / gcd(a, b);
}

ll sum(ll first, ll end, ll count) {
    return (ll)(first+end) * count  * 1/2;    
}

int main() {
    ll N, A , B; 
    cin >> N >> A >> B;
    ll S_N = sum(1, N, N);
    ll S_A = sum(A, A * (N/A), N/A);
    ll S_B = sum(B, B * (N/B), N/B);
    ll l = lcm(A, B);
    ll S_AB = sum(l, l * (N/l), N/l);
    ll ans = S_N - S_A - S_B + S_AB;
    cout << ans << endl;
    return 0;
}