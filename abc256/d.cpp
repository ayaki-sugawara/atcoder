#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<pair<int, int>> LR(n);
  for(int i=0; i<n; i++) {
    cin >> LR.at(i).first >> LR.at(i).second;
  }
  sort(LR.begin(), LR.end());
  int idx = 0;
  cout << LR.at(0).first << " ";
  int y = LR.at(0).second;
  idx++;
  while(true) {
    if(idx >= n) {
      cout << LR.at(n-1).second << endl;;
      break;
    }
    if(LR.at(idx).first > y) {
      cout << y << endl;
      cout << LR.at(idx).first << " ";
      y = LR.at(idx).second;
    } else {
      y = LR.at(idx).second;
    }
      idx++;
  }
  return 0;
}