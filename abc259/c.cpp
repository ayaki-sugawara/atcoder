#include <bits/stdc++.h>
using namespace std;

using P = pair<char, int>;

vector<P> rle(string &s) {
    vector<P> res;
    for(char c: s) {
        if(res.size() > 0 && res.back().first == c) {
            res.back().second++;
        } else {
            res.emplace_back(c, 1);
        }
    }
    return res;
}

int main() {
    string s, t;
    cin >> s >> t;
    auto a = rle(s);
    auto b = rle(t);
    if(a.size() != b.size()) {
        cout << "No" << endl;
        return 0;
    }
    else {
        for(int i=0; i<a.size(); i++) {
            if(a.at(i).first != b.at(i).first) {
                cout << "No" << endl;
                return 0;
            }
            else {
                int al = a[i].second;
                int bl = b[i].second;
                if(al == 1 && bl !=1) {
                    cout << "No" << endl;
                    return 0;
                } else if(bl < al) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}