#include <bits/stdc++.h>
using namespace std;

int MAX = 0;
int C[200010];

int main() {
    int N;
    cin >> N;
    long long ans = 0;
    for(int i=0; i<N; i++) {
        int a;
        cin >> a;
        MAX = max(MAX, a);
        C[a]++;
    }
    
    for(int x=1; x<=MAX; x++) {
        for(int y=1; x*y<=MAX; y++) {
            int z = x * y;
            int Cx = C[x];
            int Cy = C[y];
            int Cz = C[z];
            ans += (long long)Cx * Cy * Cz;
        }
    }
    cout << ans << endl;
    return 0;
}