#include <bits/stdc++.h>
using namespace std;

int INF = 1001001001;
pair<int, int> Move[] = {
    {1, 0},
    {0, 1},
    {1, -1},
    {1, 1}
};

int board[1000][1000];
int main() {
    int N;
    cin >> N;
    for(int i=0; i<N; i++) {
        string S;
        cin >> S;
        for(int j=0; j<N; j++) {
            if(S.at(j) == '#') board[i][j] = 1;
        }
    }
    
    for(int i=0; i<4; i++) {
        pair<int, int> move = Move[i];
        for(int n=0; n<N; n++) {
            for(int m=0; m<N; m++) {
                int black_counter = 0;
                for(int j=0; j<6; j++) {
                    pair<int, int> P = {n+j*move.first, m+j*move.second};
                    if(P.first >= N || P.first < 0 || P.second >= N || P.second < 0) {
                        black_counter = INF;
                        break;
                    }
                    int symbol = board[P.first][P.second];
                    if(symbol == 0) black_counter++;
                }
                if(black_counter <= 2) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}