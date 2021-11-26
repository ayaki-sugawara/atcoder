#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  int A[N];
  cin >> N;
  int ans = 0;
  for (int i=0; i<N; i++){
    cin >> A[i];
    if (A[i] > 10){
      ans += A[i] - 10;
    }
  }
  cout << ans << endl;
  return 0;
}
