#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> A;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        A[a]++;
    }
    for(auto it=A.rbegin(); it!=A.rend(); it++){
        cout << it->second << endl;
    }
    for(int i=0; i<n - (int)A.size(); i++){
        cout << 0 << endl;
    }
}