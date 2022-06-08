#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    ll X;
    string S;
    cin >> N >> X >> S;
    deque<int> M;
    for(int i=0; i<N; i++) {
        if(S.at(i) == 'U' && !M.empty() && M.back() != -1) {
            M.pop_back();
            continue;
        }
        if(S.at(i) == 'L') M.push_back(1);
        if(S.at(i) == 'R') M.push_back(0);
        if(S.at(i) == 'U') M.push_back(-1);
    }
    
    while(!M.empty()) {
        int move = M.front();
        M.pop_front();
        if(move == -1) X /= 2;
        if(move == 1) X *= 2;
        if(move == 0) X = X * 2 + 1;
    }
    
    cout << X << endl;
    return 0;
}