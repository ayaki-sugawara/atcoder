#include <bits/stdc++.h>

using namespace std;

void dfs(vector<string>  &S, vector<string> &T, int used_S_count, int remain, string x) {
    if(remain < 0) {
        return;
    }
    if(x.length() > 16) return;
    if(used_S_count == S.size()) {
        if(!binary_search(T.begin(), T.end(), x) && x.length() > 2) {
            cout << x << endl;
            exit(0);
        }
        return;
    }

    dfs(S, T, used_S_count+1, remain-1, x + '_' + S[used_S_count]);
    dfs(S, T, used_S_count, remain-1, x + '_');
    
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> S;
    vector<string> T;
    int remain = 16;
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        S.push_back(s);
        remain -= s.length();
    }
    for(int i=0; i<m; i++) {
        string t;
        cin >> t;
        T.push_back(t);
    }
    
    sort(S.begin(), S.end());
    sort(T.begin(), T.end());

    do {
        dfs(S, T, 1, remain, S[0]);
    } while(next_permutation(S.begin(), S.end()));

    cout << -1 << endl;
    
    return 0;
}