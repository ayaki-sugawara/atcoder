#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int zure=0;
    for(int i=0; i<q; i++) {
        int step, x;
        cin >> step >> x;

        if(step == 1) {
            zure += x;
            zure %= n;
        } else {
            int honto = x - zure;
            if(honto<=0) honto += n;
            else if(honto >n) honto -= n;
            cout << s.at(honto-1) << endl;
        }
    }
    return 0;
}