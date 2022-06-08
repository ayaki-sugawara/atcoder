#include <bits/stdc++.h>
using namespace std;

int A[100];
bool B[100];
int main() {
    int N, K;
    cin >> N >> K;
    int max_delicious = 0;
    for(int i=0; i<N; i++) {
        int a;
        cin >> a;
        A[i] = a;
        max_delicious = max(max_delicious, a);
    }
    for(int i=0; i<K; i++) {
        int b;
        cin >> b;
        b--;
        B[b] = true;
    }
    for(int i=0; i<N; i++) {
        if(A[i] == max_delicious && B[i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}