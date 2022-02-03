#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for(int i=1; i<=n; i++){
    int a = i;
    int digit = 0;
    while(a!=0){
      a/=10;
      digit++;
    }
    if(digit%2!=0) ans++;
  }
  cout << ans << endl;
  return 0;
}
