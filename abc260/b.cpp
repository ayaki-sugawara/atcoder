#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<pair<int,int>> A(n);
    vector<pair<int,int>> B(n);
    vector<pair<int,int>> S(n); //sum
    vector<bool> P(n, false);
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        A.at(i) = {-a, i+1};
    }
    for(int i=0; i<n; i++) {
        int b;
        cin >> b;
        B.at(i) = {-b, i+1};
    }
    for(int i=0; i<n; i++) {
        S.at(i) = {A.at(i).first + B.at(i).first, i+1};
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(S.begin(), S.end());
    for(int i=0; i<x; i++) {
        P.at(A.at(i).second - 1) = true;
    }
    int c = 0;
    for(int i=0; i<n; i++) {
        if(c == y) break;
        if(!P.at(B.at(i).second - 1)) {
            P.at(B.at(i).second - 1) = true;
            c++;
        }
    }
    c = 0;
    for(int i=0; i<n; i++) {
        if(c == z) break;
        if(!P.at(S.at(i).second - 1)) {
            P.at(S.at(i).second - 1) = true;
            c++;
        }
    }
    for(int i=0; i<n; i++) {
        if(P.at(i)) cout << i + 1 << endl;
    }
    return 0;
}