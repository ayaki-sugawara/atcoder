#include<bits/stdc++.h>
using namespace std;

int ha, wa;
int hb, wb;
bool flag = 0;

void dfs(int i, int j, int x, int y,  vector<vector<int>> & A, vector<vector<int>> & B){
    //x, yは判定するB
    if(i>=ha || j>=wa) return;
    if(x>=hb || y>=wb) return;

    if(A[i][j] == B[x][y]) {
        if(x == hb-1 && y == wb-1) flag=1;
        else {
            dfs(i+1, j, x+1, y, A, B);
            dfs(i, j+1, x, y+1, A, B);
        }
    } else {
            dfs(i+1, j, x, y, A, B);
            dfs(i, j+1, x, y, A, B);
    }

}

int main() {
    cin >> ha >> wa;
    vector<vector<int>> A(ha, vector<int>(wa));
    for(int h=0; h<ha; h++) {
        for(int w=0; w<wa; w++) {
            cin >> A[h][w];
        }
    }
    cin >> hb >> wb;
    vector<vector<int>> B(hb, vector<int>(wb));
    for(int h=0; h<hb; h++) {
        for(int w=0; w<wb; w++) {
            cin >> B[h][w];
        }
    }
    dfs(0,0,0,0,A, B);
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}