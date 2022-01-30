#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int l = 0;
  int r = s.size() - 1;
  bool flag = false;
  while(l<r){
    if(s.at(l) == 'a'){
      if(s.at(r) == 'a') {
        l++;
        r--;
      } else {
        cout << "No" << endl;
        return 0;
      }
    }
    else {
      if(s.at(r) == 'a'){
        r--;
      } else {
        if(s.at(l) != s.at(r)) {
          cout << "No" << endl;
          return 0;
        }
        else{
          r--;
          l++;
        }
      }
    }
  }
  cout << "Yes" << endl;  
  return 0;
}
