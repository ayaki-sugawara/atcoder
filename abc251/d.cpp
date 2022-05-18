#include <bits/stdc++.h>
using namespace std;

struct DP {
    set<int> S;
    int C;   
};
DP dp[100100100];

int main() {
    int W;
    cin >> W;
    for(int i=1; i<W+1; i++) {
        dp[i] = {{}, 0};
    }
    dp[1] = {{1}, 1};
    dp[2] = {{1, 2}, 1};
    if(W>2) {
        for(int i=3; i<W+1; i++) {
            
        }    
    }
    return 0;
}