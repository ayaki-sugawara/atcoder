#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f(ll a, ll b) {
  return a * a * a + a * a * b + a * b * b + b * b * b;
}

int main() {
  ll N;
  cin >> N;
  ll b = 1000000;
  ll ans = 1000000000000000000;
  for(ll a=0; a<1000000; a++){
  while(b>=a){
    if(f(a, b) >= N){
      ans = min(f(a, b), ans);
    } else {
      break;
    }
    b--;
  }  
  }
  cout << ans << endl;
  return 0;
}