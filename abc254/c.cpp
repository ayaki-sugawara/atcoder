#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> A(k);
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        A.at(i%k).push_back(a);
    }
    for(int i=0; i<k; i++) {
        sort(A.at(i).begin(), A.at(i).end());
    }
    for(int i=0; i<A.at(0).size(); i++) {
        int t = A.at(0).at(i);
        for(int j=1; j<k; j++) {
            if(A.at(j).size() <= i) {
                break;
            }
            if(t > A.at(j).at(i)) {
                cout << "No" << endl;
                return 0;
            }
            t = A.at(j).at(i);
        }
    }
                cout << "Yes" << endl;
    return 0;
}