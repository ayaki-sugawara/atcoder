#include <bits/stdc++.h>
using namespace std;

int S[1000000];
int main() {
    int N;
    cin >> N;
    vector<int> A(N+1);
    for(int i=0; i<N; i++) {
        cin >> A.at(i+1);
    }
    bool flag = false;
    if(A.at(1) > A.at(N)) flag = true;
    S[1] = min(A.at(1), A.at(N));
    for(int i=2; i<N+1; i++) {
        int a = S[i-2] + A.at(i-1);
        int b = S[i-1] + A.at(i-1);
        int c = S[i-1] + A.at(i);
        S[i] = min(a, b);
        S[i] = min(S[i], c);
        if(i==N && flag) {
            S[i] = S[i-1];
        }
    }
    cout << S[N] << endl;
    return 0;
}