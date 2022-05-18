#include <bits/stdc++.h>
using namespace std;

bool is_good_num[1001001];
int main() {
    int N, W;
    cin >> N >> W;
    for(int i=1; i<W+1; i++) {
        is_good_num[i] = false;
    }
    vector<int> weight(N+2);
    for(int n=0; n<N; n++) {
        cin >> weight.at(n);
    }
    weight.push_back(0);
    weight.push_back(0);
    for(int i=0; i<N+2; i++) {
        for(int j=i+1; j<N+2; j++) {
            for(int k=j+1; k<N+2; k++) {
                int sum = weight.at(i) + weight.at(j) + weight.at(k);
                if(sum<=W) is_good_num[sum] = true;
            }
        }
    }
    int ans = 0;
    for(int i=1; i<W+1; i++) {
        if(is_good_num[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}