#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  string ans = "";
  while(n>0){
    if(n%2==0) {
      n/=2;
      ans = "B" + ans;
    } else {
      n--;
      ans = "A" + ans;
    }
  }
  cout << ans << endl;
  return 0;
}
