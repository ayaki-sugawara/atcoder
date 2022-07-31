#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    vector<pair<int, bool>> d;
    for(int i=0; i<n; i++) {
        int w;
        cin >> w;
        bool isAdult = s.at(i) == '1';
        d.emplace_back(w, isAdult);
    }
    sort(d.begin(), d.end());
    vector<pair<int, int>> sum;
    sum.emplace_back(0,0);
    for(int i=0; i<n; i++) {
        if(d[i].second == 0) sum.emplace_back(sum[i].first+1, sum[i].second);
        else sum.emplace_back(sum[i].first, sum[i].second+1);
    }
    int ans = 0;
    for(int i=0; i<n; i++) {
        if(i>0 && d[i-1].first == d[i].first) continue;
        int lc = sum[i].first;
        int la = sum[i].second;
        int gc = sum[n].first - sum[i].first;
        int ga = sum[n].second - sum[i].second;
        ans = max(lc+ga, ans);
    }
    ans = max(ans, sum[n].first);
    cout << ans << endl;
    return 0;
}