#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0; (i)<(int)(n);(i)++)
vector<vector<int>> path;
int dfs(int now, int pre, int count){
  if(now == 
  for(auto next: path.at(now)){
    if(next != pre
  }
}

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n-1), b(n-1), c(q), d(q);
  rep(i,n) {
    cin >> a.at(i) >> b.at(i);
  }
  rep(i,q) {
    cin >> c.at(i) >> d.at(i);
  }
  return 0;
}
