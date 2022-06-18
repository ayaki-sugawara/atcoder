#include <bits/stdc++.h>
using namespace std;

bool board[4];
int main() { 
  int n;
  cin >> n;
  int P=0;
  for(int i=0; i<n; i++) {
    int a;
    cin >> a;
    board[0] = true;
    for(int j=3; j>=0; j--){
      if(board[j]) {
        if(j+a > 3) {
          P++;
        }
        else {
          board[j+a] = true;
        }
        board[j] = false;
      }
    }
  }
  cout << P << endl;
  return 0;
}