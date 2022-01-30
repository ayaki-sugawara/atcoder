#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> a = {0};
  auto it = a.begin();
  for(int i=1; i<n+1; i++){
    if(s.at(i-1) == 'L'){
      //if L
      it = a.insert(it,i);
    }
    else {
      it = a.insert(it+1,i);
    }
  }
  for(int i=0; i<n+1; i++){
    cout << a.at(i);
    if(i!= n) cout << " ";
  }
  cout << endl;
  return 0;
}
