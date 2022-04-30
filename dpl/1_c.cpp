#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;
    vector<int> value(N);
    vector<int> weight(N);
    for(int i=0; i<N; i++) {
        cin >> value.at(i) >> weight.at(i);
    }
    return 0;
}