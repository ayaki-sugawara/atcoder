#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> m;
  vector<pair<int, int>> target(m);
  int x, y;
  for(int i=0; i<m; i++){
    cin >> x >> y;
    target.at(i) = make_pair(x, y);
  }
  cin >> n;
  vector<pair<int, int>> picture(n);
  for(int i=0; i<n; i++){
    cin >> x >> y;
    picture.at(i) = make_pair(x, y);
  }
  sort(target.begin(), target.end());
  sort(picture.begin(),picture.end());
  int dx, dy;
  for(int j=0; j<n; j++){
    bool flag = true;
    dx = - target.at(0).first + picture.at(j).first;
    dy = - target.at(0).second + picture.at(j).second;
    for(int i=1; i<m; i++){
      pair<int, int> next = make_pair(target.at(i).first + dx, target.at(i).second + dy);
      auto iter = lower_bound(picture.begin(), picture.end(), next);
      if(*iter != next){
        flag = false;
        break;
      }
    }
    if(flag) break;
  }
  cout << dx << " " << dy << endl;
  return 0;
}
