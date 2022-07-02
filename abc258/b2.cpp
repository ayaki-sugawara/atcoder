#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int, vector<int>> A(n, vector<int> (n));
    for(int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> A.at(i).at(j);
        }
    }
    vector<pair<int, int>> move = {{0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}};
    
}