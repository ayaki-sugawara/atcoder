#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  k--;
  vector<int> sum(n);
  for(int i=0; i<n; i++){
    int a,b,c;
    cin >> a >> b >> c;
    sum.at(i) = a + b + c;
  }
  vector<int> q = sum;
  sort(q.begin(), q.end(), greater<>());
  for(auto x:sum){
    if(x+300>=q[k]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}
