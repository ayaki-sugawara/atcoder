#include <bits/stdc++.h>
using namespace std;

vector<int> comp(vector<int> a, vector<int> b, int n) {
    for(int i=0; i<n; i++) {
        if(a.at(i) == b.at(i)) continue;
        else if (a.at(i) > b.at(i)) return a;
        else return b;
    }
    return {0};
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> A(n, vector<int>(n));
    vector<pair<int, int>> move = {{0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}};
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> A.at(i).at(j);
        }
    }
    vector<int> ans(n);
    cout << " ok" << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            pair<int, int> now = {i, j};
            //start position
            for(int m=0; m<8; m++) {
                vector<int> temp(n);
              for(int c=0; c<n; c++) {
                cout << i << " " << j << " " << m  << " " << c<< endl;
                if(c!=0) {
                    now.first += move.at(m).first;
                    now.second += move.at(m).second;
                }
                temp.at(c) = A.at(now.first).at(now.second);
                ans = comp(ans, temp, n);
              }  
            }
        }
    }
    for(auto a: ans) {
        cout << a;
    }
    return 0;
}
