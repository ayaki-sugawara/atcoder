#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for(int i=1; i<=n; i++){
    if(i%2==0) continue;
    int sum = 0;
    for(int j=1; j*j<i; j++){
      if(i%j==0) sum++;
    }
    if(sum==4) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
