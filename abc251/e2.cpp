#include <bits/stdc++.h>
using namespace std;

struct DP {
    int sum;
    int S;
};
DP P[1000000]; // action 1 is enabled
DP Q[1000000]; // action 1 is disabled
int main() {
    int N;
    cin >> N;
    vector<int> A(N+1);
    for(int i=1; i<N+1; i++) cin >> A.at(i);  
    P[1] = {A.at(1), 110};
    Q[1] = {A.at(N), (1<<1) | (1<<N)};
    for(int i=2; i<N+1; i++) {
        if((P[i-1].S >> i) && 1) { //もらってる
            P[i] = P[i-2].sum + A 
        }
    }
    return 0;
}