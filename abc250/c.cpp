#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    map<int, int> index_to_ball;
    map<int, int> ball_to_index;
    for(int i=0; i<N; i++) {
        index_to_ball[i] = i;
        ball_to_index[i] = i;
    }
    
    for(int i=0; i<Q; i++) {
        int x;
        cin >> x;
        x--;
        if (ball_to_index.at(x) != N-1) {
           int index_of_ball = ball_to_index.at(x); 
           int swap_ball = index_to_ball.at(index_of_ball+1);
           ball_to_index.at(x) += 1;
           ball_to_index.at(swap_ball) -= 1;
           index_to_ball.at(index_of_ball) = swap_ball;
           index_to_ball.at(index_of_ball + 1) = x; 
        } else {
           int index_of_ball = ball_to_index.at(x); 
           int swap_ball = index_to_ball.at(index_of_ball-1);
           ball_to_index.at(x) -= 1;
           ball_to_index.at(swap_ball) += 1;
           index_to_ball.at(index_of_ball) = swap_ball;
           index_to_ball.at(index_of_ball-1) = x; 

        }
    }
    for(int i=0; i<N; i++) {
        cout << index_to_ball.at(i) + 1 << " " ;
    }
    return 0;
}