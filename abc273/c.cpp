#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> setA;
    vector<int> A;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        setA.insert(a);
        A.push_back(a);
    }
    vector<int> ansList(n+1,0);
    for(int i=0; i<n; i++){
        // cout << distance(setA.begin(), setA.upper_bound(A[i])) << endl;
        // cout << setA.size() - distance(setA.begin(), setA.upper_bound(A[i]))<< endl;
        ansList.at(setA.size() - distance(setA.begin(), setA.upper_bound(A[i]))) += 1;
    }
    for(int i=0; i<n; i++){
        cout << ansList.at(i) << endl;
    }
    return 0;
}