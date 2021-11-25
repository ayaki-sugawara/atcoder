#include <bits/stdc++.h>
using namespace std;

long long memo[1000][1000];
long long K;

long long mCn(int m, int n){
  //m and n are above 0 and m >= n
  if (memo[m][n] > 0){
    return memo[m][n];
  }
  if (m == n || n == 0) return memo[m][n] = 1;
  return memo[m][n] = mCn(m-1, n-1) + mCn(m-1, n);
}

int main(){
  int A, B;
  cin >> A >> B >> K;
  K--;
  int N = A + B;
  string ans = "";
  for (int i=0; i<N; i++){
      if(A == 0){
          ans += 'b';
          B--;
      }
      else if (B == 0){
          ans += 'a';
          A--;
      }
      else{
          if(K < mCn(A+B-1,B)){
              ans += 'a';
              A--;
          }
          else {
              ans += 'b';
              K -= mCn(A+B-1,B);
              B--;
          }
      }
      
  }
  cout << ans << endl;
  return 0;
}
