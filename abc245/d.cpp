#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int A[N+1];
  int C[N+M+1];
  for(int i=0; i<N+1; i++) cin >> A[i];
  for(int i=0; i<N+M+1; i++) cin >> C[i];
  int B[M+1];
  for(int i=M; i>=0; i--) {
    B[i] = C[N+i] / A[N];
    for(int j=N; j>=0; j--){
      C[N+i+j-N] -= B[i] * A[j];
    }
  }
  for(int i=0; i<M+1; i++) cout << B[i] << " ";
  return 0;
}