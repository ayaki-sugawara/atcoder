#include <bits/stdc++.h>
using namespace std;

struct P {
  pair<int, int> position;
  int time;
};

int main() {
  int H, W, N;
  cin >> H >> W >> N;
  vector<vector<char>> A(H+2, vector<char>(W+2, 'X'));
  vector<pair<int, int>> startList(N+1);
  for(int i=1; i<H+1; i++) {
    string a;
    cin >> a;

    for(int j=1; j<W+1; j++) {
      if(a.at(j-1) == 'X') continue;
      else if(a.at(j-1) == '.') A.at(i).at(j) = '.';
      else if(a.at(j-1) == 'S') {
        startList.at(0) = make_pair(i, j);
        A.at(i).at(j) = '.';
      } 
      else {
        startList.at(a.at(j-1) - 48) = make_pair(i, j);
        A.at(i).at(j) = '.';
      }
    }
  }
  
  int ans = 0;
  vector<pair<int, int>> move = {{0,1},{0,-1},{1,0},{-1,0}}; 
  for(int start=0; start<N; start++) {
    vector<vector<bool>> isvisited(H+2, vector<bool>(W+2, false)); 
    queue<P> root;
    root.push({startList.at(start), 0});
    while(!root.empty()) {
      P now = root.front();
      root.pop();
      if(now.position == startList.at(start+1)) {
        // arrive at goal 
        ans += now.time;
        break; 
      }
      //check this node is available 
      if(A.at(now.position.first).at(now.position.second) == 'X') continue;
      //check this node is visited 
      if(isvisited.at(now.position.first).at(now.position.second)) continue;
      isvisited.at(now.position.first).at(now.position.second) = true; 
      for(auto direction: move) {
        root.push({{now.position.first + direction.first, now.position.second + direction.second}, now.time+1});
      }
    }
  }
  cout << ans << endl;
  return 0;
}