#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> A(n);
    for(int i=0; i<n; i++) {
        A.at(i).resize(i+1);
        for(int j=0; j<i+1; j++) {
            if(j == 0 || j == i) A.at(i).at(j) = 1;
            else {
                A.at(i).at(j) = A.at(i-1).at(j-1) + A.at(i-1).at(j);
            }
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {
            cout << A.at(i).at(j) << " ";
        }
        cout << endl;
    }
    return 0;
}