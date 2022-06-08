#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;

int main() {
    int n;
    cin >> n;
    vector<string> S(n); 
    int ans = INF;
    for(int i=0; i<n; i++) cin >> S.at(i);
    for(int i=0; i<10; i++) {
        set<int> T;
        for(int j=0; j<n; j++) {
            string s = S.at(j);
            for(int p=0; p<10; p++) {
                if(s.at(p)-'0' == i) {
                    //止めたい
                    int t = p;
                    while(T.count(t)) {
                        t += 10;
                    }
                    T.insert(t);
                    break;
                }
            }
        }
        ans = min(ans, *rbegin(T));
    }
    cout << ans << endl;
    return 0;
}