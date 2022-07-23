#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    if(S[0] != S[1] && S[0] != S[2]) {
        cout << S[0] << endl;
        return 0;
    }
    if(S[1] != S[0] && S[1] != S[2]) {
        cout << S[1] << endl;
        return 0;
    }
    if(S[2] != S[1] && S[0] != S[2]) {
        cout << S[2] << endl;
        return 0;
    } else {
        cout << -1 << endl; 
    }

    return 0;
}