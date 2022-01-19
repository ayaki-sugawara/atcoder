#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  set<vector<int>> L;
  for(int i=0; i<n; i++){
    int l;
    cin >> l;
    vector<int> a(l);
    for (int j=0; j<l; j++) cin >> a.at(j);
    L.insert(a);
  }
  cout << L.size() << endl;
  return 0;
}
