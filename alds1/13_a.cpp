#include <bits/stdc++.h>
using namespace std;

bool check(int r1, int c1, int r2, int c2){
  int dr = abs(r1-r2);
  int dc = abs(c1-c2);
  if(dr==dc) return false;
  else return true;
}

void draw(vector<int> nums){
  char board[8][8];
  for(int i=0; i<8; i++){
    for(int j=0; j<8; j++) board[i][j] = '.';
    board[i][nums.at(i)] = 'Q';
  }
  for(int i=0; i<8; i++){
    for(int j=0; j<8; j++){
      cout << board[i][j];
    }
    cout << endl;
  }
  return ;
}

int main() {
  int k;
  cin >> k;
  vector<pair<int, int>> condition(k);
  for(int i=0; i<k; i++){
    int a, b;
    cin >> a >> b;
    condition.at(i) = make_pair(a, b);
  }
  vector<int> nums {0, 1, 2, 3, 4, 5, 6, 7};
  do {
    //check if this combination meets the conditions
    bool flag = true;
    for(auto c: condition){
      if(nums.at(c.first) != c.second) {
        flag = false;
        break;
      }
    }
    if(!flag) continue;

    //check every combination if the condition is met
    bool isAns = true;
    for(int i=0; i<8; i++){
      for(int j=i; j<8; j++){
        if(i==j) continue;
        if(!check(i, nums.at(i), j, nums.at(j))){
          isAns = false;
          break;
        };
      }
      if(!isAns) break;
    }
    if(isAns) draw(nums);

  } while (next_permutation(nums.begin(), nums.end()));
  return 0;
}
