#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N), C(N);
    for(int i=0; i<N; i++) {
        cin >> A.at(i);
    }
    for(int i=0; i<N; i++) {
        cin >> B.at(i);
    }
    for(int i=0; i<N; i++) {
        cin >> C.at(i);
    }
    sort(A.begin(), A.end());
    sort(C.begin(), C.end());
    long long ans = 0;
    for(int i=0; i<N; i++) {
        long long a = lower_bound(A.begin(), A.end(), B.at(i)) - A.begin();
        long long c = N - int(upper_bound(C.begin(), C.end(), B.at(i)) - C.begin());
        ans += a * c;
    }
    cout << ans << endl;
    return 0;
}