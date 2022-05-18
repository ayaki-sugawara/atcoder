#include <bits/stdc++.h>
using namespace std;

int main() {
    //100進数で考えれば十分
    int W;
    cin >> W;
    cout << 297 << endl;
    for(int i=1; i<100; i++) {
        cout << i << " " << i * 100 << " " << i * 100 * 100 << " ";
    }
    cout << endl;
    return 0;
}