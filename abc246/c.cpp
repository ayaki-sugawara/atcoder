#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, x;
    cin >> n >> k >> x;
    vector<long long > A(n);
    for(int i=0; i<n; i++) {
        cin >> A.at(i); 
    }
    sort(A.begin(), A.end(), greater<long long >());
    for (int i=0; i<n; i++){
        if (A.at(i) < x) break;
        long long max_coupon = A.at(i) / x;
        if (k >= max_coupon) {
            k -= max_coupon;
            A.at(i) %= x;
        } else {
            A.at(i) -= k * x;
            k = 0;
            break;
        }
    }
    sort(A.begin(), A.end(), greater<long long >());
    if (k > 0) {
        for(int i=0; i<n; i++){
            A.at(i) = 0;
            k--;
            if(k==0) {
                break;
            }
        }
    }
    long long ans = 0;
    for(int i=0; i<n; i++){
        ans += A.at(i);
    }
    cout << ans << endl;
    return 0;
}