#include<bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  int ans = 1001001000;
  for(long long x=1; x*x<=n; x++){
    if(n%x!=0) continue;
    long long y = n / x;
    int digit = 0;
    while(y!=0){
      y/=10;
      digit++;
    }
    ans = min(ans, digit);
  }
  cout << ans << endl;
  return 0;
}

