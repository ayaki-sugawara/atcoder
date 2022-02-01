#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> to;
vector<bool> town;

void dfs(int now, int pre=-1){
  for(auto next: to.at(now)){
    if(pre == next) continue;
    else {
      town.at(next) = !town.at(now);
      dfs(next, now);
    }
  }
  return;
}

int main() {
  int n,q;
  cin >> n >> q;
  to.resize(n);
  town.resize(n);
  for(int i=0; i<n-1; i++){
    int a, b;
    cin >> a >> b;
    a--; b--;
    to.at(a).push_back(b);
    to.at(b).push_back(a);
  }
  town.at(0) = true;
  dfs(0); 
  for(int i=0; i<q; i++){
    int c, d;
    cin >> c >> d;
    c--; d--;
    if(town.at(c)==town.at(d)) cout << "Town" << endl;
    else cout << "Road" << endl;
  }
  return 0;
}
