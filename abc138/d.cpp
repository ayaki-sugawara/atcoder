#include <bits/stdc++.h>
using namespace std;

void make_tree(vector<vector<int>> &tree, vector<vector<int>> &path, int pre, int now) {
    for(auto next: path.at(now)){
        if(next != pre) {
            tree.at(now).push_back(next);
            make_tree(tree, path, now, next);
        }
    }
    return;    
}

void add_x(vector<vector<int>> &tree, vector<int> &counter, int root, int x) {
    counter.at(root) += x;
    for(auto next_root: tree.at(root)){
        add_x(tree, counter, next_root, counter.at(root));
    }
    return;
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> path(n);
    for(int i=0; i<n-1; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        path.at(a).push_back(b);
        path.at(b).push_back(a);
    }
    vector<vector<int>> tree(n);
    make_tree(tree, path, -1, 0);
    vector<int> counter(n,0);
    for(int i=0; i<q; i++) {
        int p, x;
        cin >> p >> x; 
        p--;
        counter.at(p) += x;
    }
    add_x(tree, counter, 0, 0);
    for(int i=0; i<n; i++) {
        cout << counter.at(i) << " ";
    }
    cout << endl;
    return 0;
}