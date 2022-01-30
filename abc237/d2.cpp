#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> a;
  stack<int> b;
  int i=0;
  b.push(i);
  while(!b.empty()){
    if(b.top() >= s.size()) {
      break;
    }
    if(s.at(b.top()) == 'L'){
      i++;
      b.push(i);
    }
    else {
      a.push_back(b.top());
      b.pop();
      i++;
      b.push(i);
    }

  }
  while(!b.empty()){
    a.push_back(b.top());
    b.pop();
  }
  for(int i=0; i<n+1; i++){
    cout << a.at(i);
    if(i!=n) cout << " ";
  }
  cout << endl;
  return 0;
}
