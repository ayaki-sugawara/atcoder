#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A.at(i);
    sort(A.begin(), A.end());
    ll ans = 0;
    for(int j=1; j<N-1; j++) {
        int Aj = A.at(j);
        int Ci = lower_bound(A.begin(), A.end(), Aj) - A.begin();
        int Ck = A.end() - upper_bound(A.begin(), A.end(), Aj);
        ans += (ll)Ci * Ck;
    }
    cout << ans << endl;
    return 0;
}