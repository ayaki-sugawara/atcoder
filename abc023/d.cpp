#include <bits/stdc++.h>
using namespace std;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N; 
    vector<long long> h(N), s(N);
    for(int i=0; i<N; i++){
        cin >> h.at(i) >> s.at(i);
    }
    long long left = 0;
    long long right = INF;
    while(right-left > 1) {
        long long mid = (left + right) / 2;
        bool ok = true;

        vector<long long> t(N, 0); // deadline each baloon
        for(int i=0; i<N; i++) {
            if (mid < h.at(i)) ok = false;
            else t.at(i) = (mid - h.at(i)) / s.at(i);
        }
        sort(t.begin(), t.end());
        for(int i=0; i< N; i++){
            if(t.at(i) < i) ok = false;
        }
        if(ok) right = mid;
        else left = mid;
    }
    cout << right << endl;
    return 0;
}