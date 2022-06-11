#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> A(k);
    for(int i=0; i<k; i++) {
        cin >> A.at(i);
        A.at(i)--;
    }
    vector<pair<int, int>> xy(n);
    for(int i=0; i<n; i++) {
        cin >> xy.at(i).first >> xy.at(i).second;
    }
    
    double ans = 0;
    for(int i=0; i<n; i++) {
        // calculate min distance from a person who has a light
        double minD = INF;
        for(int j=0; j<k; j++) {
            double d = pow(pow(double(xy.at(i).first - xy.at(A.at(j)).first), 2) + pow(double(xy.at(i).second- xy.at(A.at(j)).second), 2), 0.5);
            if(d < minD) minD = d;
        }
        
        if(minD > ans) ans = minD;
    }
    cout << fixed;
    cout << setprecision(10) << ans << endl;
    return 0;
}