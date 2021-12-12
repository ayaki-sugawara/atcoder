#include <bits/stdc++.h>
using namespace std;

int factrial(int n){
//階乗
  int ans=1;
  for(int i=1; i<n+1; i++){
    ans *= i;
  }
  return ans;
}

int main() {
  int p, ans=0, n=10;
  cin >> p;
  while(p > 0){
    while(1){
      if(p<factrial(n)){
        n--;
        break;
      }
      p -= factrial(n);
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
