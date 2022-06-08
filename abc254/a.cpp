#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    n %= 100;
    if(n < 10) {
        cout << '0';
    }
    cout << n << endl;
    return 0;
}