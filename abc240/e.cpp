#include<bits/stdc++.h>
using namespace std;
#define INF 1001001001

vector<pair<int, int>> lr;
vector<vector<int>> rel;

stack<int> target;
stack<int> K;
stack<int> P;

void bfs(int now, int kai, int pre){
  target.push(now);
  K.push(kai);
  P.push(pre);
  for(auto x: rel.at(now)){
    if(x == pre) continue;
    bfs(x, kai+1, now); 
  }
  return ;
}
int main() {
  int n;
  cin >> n;
  rel.resize(n);
  lr.resize(n);
  for(int i=0; i<n; i++){
    lr.at(i) = make_pair(INF, 0);
  }
  for(int i=0; i<n-1; i++){
    int u, v;
    cin >> u >> v;
    u--; v--;
    rel.at(u).push_back(v);
    rel.at(v).push_back(u);
  }
  bfs(0, 1, -1);
  int count = 1;
  while(!target.empty()){
    int top = target.top();
    int pre = P.top();
    target.pop();
    P.pop();
    if(pre == -1) continue;
    if(lr.at(top).second == 0){
      lr.at(top).first = count;
      lr.at(top).second = count;
      lr.at(pre).first = min(count, lr.at(pre).first);
      lr.at(pre).second= max(count, lr.at(pre).second);
      count++;
    } else{
      lr.at(pre).first = min(lr.at(top).first, lr.at(pre).first);
      lr.at(pre).second= max(lr.at(top).second, lr.at(pre).second);
    }
  }
  for(auto x: lr){
    cout << x.first << " " << x.second << endl;
  }
  return 0;
}
