#include <bits/stdc++.h>
using namespace std;

map<int, int> S;
set<int> N;
int main() {
    int Q;
    cin >> Q;
    for(int i=0; i<Q; i++) {
        int q;
        cin >> q;
        if(q == 1) {
            int x;
            cin >> x;
            if(S.count(x)) S.at(x)++;
            else S[x] = 1;
            N.insert(x);
        } else if(q == 2) {
            int x, c;
            cin >> x >> c; 
            if(!S.count(x)) continue;
            S.at(x) = S.at(x) - min(c, S.at(x));
            if(S[x]==0) {
                N.erase(x);
            }
        } else {
            cout << *N.rbegin()-*N.begin() << endl;
        }
    }
    return 0;
}