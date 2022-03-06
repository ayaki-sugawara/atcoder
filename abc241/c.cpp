#include <bits/stdc++.h>
using namespace std;

bool judge(int n, vector<vector<bool>> &board) {
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(search(1, *board, i, j){
        return true;
      }
    }
  }
  return false;
}

bool search(int count, vector<vector<bool>> &board, int r, int c){
  if(count == 6) return true;
  if(board.at(r+1).at(c)) return search(count+1, *board, r+1, c);
  if(board.at(r+1).at(c+1)) return search(count+1, *board, r+1, c+1);
  if(board.at(r).at(c+1)) return search(count+1, *board, r, c+1);
  return false;

}

int main() {
  int n;
  cin >> n;
  vector<vector<bool>> board(n);
  for(int i=0; i<n; i++){
    board.at(i).resize(n);
    string S;
    cin >> S;
    for(int j=0; j<n; j++){
      if(S.at(j) == '#'){
        board.at(i).at(j) = true;
      } else {
        board.at(i).at(j) = false;
      }
    }
  }
  
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      vector<vector<bool> T = board;
      T.at(i).at
    }
  }

  return 0;
}
