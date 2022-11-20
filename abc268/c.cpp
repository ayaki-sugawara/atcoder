#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> m;
    for(int i=0; i<n; i++) {
        int p;
        cin >> p;
        //食べ物pが人iの前にある
        //人pとの距離を知りたい
        int dis = (i + n - p) % n;
        if(m.count(dis)) {
            m.at(dis)++;
        } else {
            m[dis] = 1;
        }
    }

    for(int i=0; i<n; i++) {
        if(!m.count(i)) {
            m[i] = 0;
        }
    }
    
    // for(int i=0; i<n; i++) {
    //     cout << i << " " << m.at(i) << endl;
    // }

    int ans = 0;
    for(int i=0; i+2<n; i++) {
        ans = max(m.at(i) + m.at(i+1) + m.at(i+2), ans);
    }
    ans = max(ans, m.at(0) + m.at(n-2) + m.at(n-1));

    cout << ans << endl;
    return 0;
}