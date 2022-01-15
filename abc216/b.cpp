#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> s(n), t(n);
  for(int i=0; i<n; i++){
    cin >> s.at(i) >> t.at(i);
  }
  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      if(s.at(i) == s.at(j) && t.at(i) == t.at(j)) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
