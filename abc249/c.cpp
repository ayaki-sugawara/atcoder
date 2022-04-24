#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> S(n);
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        S.at(i) = s;
    }
    //all search 2 ^ 15 (= 1024 * 32)
    int ans = 0;
    for(int i=0; i<1<<n; i++) {
        //count each alphabet(26 * 15)
        vector<int> counter(26, 0);
        int a = 0;
        for(int j=0; j<n; j++) {
            if(i>>j & 1){
                for(auto s: S.at(j)) {
                    counter.at(s - 'a') += 1;
                }
            }
        }
        //judge each alphabet count(26)
        for(auto c: counter) {
            if(c == k) a++;
        }
        ans = max(a, ans);
    }

    cout << ans << endl;
    return 0;
}