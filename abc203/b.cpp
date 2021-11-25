#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  int ans = 0;
  ans = (1+N)*N*K/2*100+(1+K)*K/2*N;
  cout << ans << endl;
  return 0;
}
