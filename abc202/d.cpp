#include <bits/stdc++.h>
using namespace std;

long long dp[31][31];
long long aCb(long long a, long long b) {
  cout << a << ' ' << b << endl;
  if (b == 0 || a == b) return dp[a][b] = 1;
  if (dp[a][b] > 0) return dp[a][b];
  return dp[a][b] = aCb(a-1, b-1) + aCb(a-1, b);
}

long long K;

int main(){
  int A, B;
  cin >> A >> B >> K;
  string ans = "";
  int N = A + B;
  for (int i=0; i<N; i++){
    cout << N << endl;
    if (A == 0){
      ans += "b";
    }
    else {
      long long j = aCb(A+B-1, B);
      if (j > K-1) {
        ans += "a";
        A--;
      }
      else {
        ans += "b";
        B--;
        K -= j;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
