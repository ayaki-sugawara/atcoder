#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;

int main() {
  int n, m;
  cin >> n >> m;
  dsu d(n);
  vector<int> deg(n);
  for(int i=0; i<m; i++){
    int a, b;
    cin >> a >> b;
    --a; --b;
    if(d.same(a,b)) {
      cout << "No" << endl;
      return 0;
    }
    d.merge(a, b);
    deg[a]++;
    deg[b]++;
  }
  for(int i=0; i<n; i++){
    if (deg[i] > 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
