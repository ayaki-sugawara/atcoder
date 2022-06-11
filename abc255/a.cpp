#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> A(2, vector<int>(2));
    cin >> A.at(0).at(0) >> A.at(0).at(1) >> A.at(1).at(0) >> A.at(1).at(1);
    cout << A.at(r-1).at(c-1) << endl;
    return 0;
}