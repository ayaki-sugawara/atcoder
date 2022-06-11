#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll x, a, d, n;
    cin >> x >> a >> d >> n;
    if (d == 0) {
        cout << abs(x - a) << endl;
        return 0;
    }
    ll alpha = floor((x - a) / d);
    ll beta = floor((x-a) / d) + 1;
    if(alpha > n-1) {
        alpha = n-1;
        beta = n-1;
    } else if (alpha < 0) {
        alpha = 0;
        beta = 1;
    }
    ll p = a + d * alpha;
    ll q = a + d * beta;
    if(abs(x - p) < abs(q - x)) {
        cout << abs(x - p) << endl;
    } else {
        cout << abs(q - x) << endl;
    }
    return 0;
}