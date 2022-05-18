#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    set<string> S;
    int max_t = 0;
    int ans = 0;
    for(int i=0; i<N; i++) {
        string s;
        int t;
        cin >> s >> t;
        if(S.count(s) == 0) {//if it is original 
            S.insert(s);
            if(t > max_t) {
                ans = i+1;
                max_t =t;
            }
        }
    }
    cout << ans << endl;
    return 0;
}