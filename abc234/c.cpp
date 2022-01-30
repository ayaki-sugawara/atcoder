#include <bits/stdc++.h>
using namespace std;

int main() {
  long long k;
  cin >> k;
  string s;
  while(k!=0){
    if (k%2 == 1){
      s = to_string(2) + s;
    } else {
      s = to_string(0) + s;
    }
    k /= 2;
  }
  cout << s << endl;
  return 0;
}
