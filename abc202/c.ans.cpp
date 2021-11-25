#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N), B(N), C(N);
  
  for (auto& x : A){
    cin >> x;
    x -= 1;
  }

  for (auto& x : B){
    cin >> x;
    x -= 1;
  }

  for (auto& x : C){
    cin >> x;
    x -= 1;
  }

  vector <int> count(N);
  for (int j=0; j<N ; j++){
    count[B[C[j]]] += 1;
  }

  long long ans = 0;
  for (int i=0; i<N; i++){
    ans += count[A[i]];
  }
  cout << ans << endl;
  return 0;
}
