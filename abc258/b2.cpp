#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> A(n, vector<int> (n));
    for(int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            char a;
            cin >> a;
            A.at(i).at(j) = a - '0';
        }
    }
    vector<pair<int, int>> move = {{0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}};
    ll ans = 0; 
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            for(auto mv:move) {
                pair<int, int> P = {i, j};
                ll now = (ll)A.at(i).at(j);
                for(int c=0; c<n-1; c++) {
                    P.first += mv.first + n;
                    P.second += mv.second + n; 
                    P.first %= n;
                    P.second %= n;
                    now *= 10;
                    now += A.at(P.first).at(P.second); 
                }
                ans = max(now, ans);
            }
        }
    }
    cout << ans << endl;
}