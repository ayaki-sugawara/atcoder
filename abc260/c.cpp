#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x, y;
    cin >> n >> x >> y;
    vector<long long> R(11,0); //levelは昇順
    vector<long long> B(11,0); //levelは昇順
    R.at(n) = 1;
    for(int i=10; i>1; i--) {
        for(int _=0; _<R.at(i); _++){
            R.at(i-1) += 1;
            B.at(i) += x;
        }
        R.at(i) = 0;

        for(int _=0; _<B.at(i); _++){
            R.at(i-1) += 1;
            B.at(i-1) += y;
        }
        B.at(i) = 0;
    }
    cout << B.at(1) << endl;
    return 0;
}