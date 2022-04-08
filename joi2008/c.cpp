#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long M;
    cin >> N >> M;
    vector<long long> P(N+1);
    for(int i=0; i<N; i++) {
        cin >> P.at(i);
    }
    P.at(N) = 0;
    //2つのペアの組み合わせの合計値のvectorを作成する
    //一つ一つの要素xに対してM-x以上のものをlower_boundで探索して合計がMを越えなければ
    //max()で更新
    //sort() NlongN 3e3
    //create vector<ll> 1e6
    //sort 6e6
    //lower_bound 1e6 * log(1e6)
    //でいけそう
    N++;
    vector<long long> D;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            D.push_back(P.at(i) + P.at(j));
        }
    }
    
    sort(D.begin(), D.end());
    long long ans = 0;
    for(int i=0; i<N*N; i++) {
        long long x = D.at(i); 
        auto y_iter = upper_bound(D.begin(), D.end(), M-x) - 1;
        if (x + *y_iter <= M) ans = max(ans, x + *y_iter);
    }
    cout << ans << endl;
    return 0;
}