#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string S[n];
    string T[m];

    int sumLength = 0;
    for(int i=0; i<n; i++) {
        cin >> S[i];
        sumLength += S[i].size();
    }
    for(int i=0; i<n; i++) {
        cin >> T[i];
    }
    
    //作れる文字列数を求めたい
    int maxStrings = 0;
    int left_ = n != 1 ? 16 - sumLength - n + 1 : 0;
    int kaijou[15];
    kaijou[0]=1;
    for(int i=1; i<=14; i++) {
        kaijou[i] = i * kaijou[i-1];
    }
    cout << kaijou[n] << endl;
    for(int i=0; i<=left_; i++) {
        maxStrings += kaijou[n] * kaijou[n-2+i]/(kaijou[n-2]*kaijou[i]);
    }
    cout << maxStrings << endl;

    return 0;
}