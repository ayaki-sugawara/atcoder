#include <bits/stdc++.h>
using namespace std;

int m, n;
int ans = 0;

void move(vector<vector<int>> ice, int x, int y, int counter){
    if(x < 0 || m <= x || y < 0 || n <= y) return;
    if(ice.at(y).at(x)) {
        counter++;
        if(ans < counter) ans = counter;
        ice.at(y).at(x) = false;
        move(ice, x+1, y, counter);
        move(ice, x-1, y, counter);
        move(ice, x, y+1, counter);
        move(ice, x, y-1, counter);
    }
    return;
}

int main() {
    cin >> m >> n;
    vector<vector<int>> ice(n, vector<int>(m));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> ice.at(i).at(j);
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            move(ice, j, i, 0);
        }
    }
    cout << ans << endl;
    return 0;
}