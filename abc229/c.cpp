#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, W;
  vector<int> A;
  vector<int> B;
  int sum = 0;
  cin >> N >> W;
  for(int i=0; i<N; i++){
    cin >> A[i] >> B[i];
    sum += B[i];
  }
  vector<vector<bool>> d(N, vector<bool>(sum+2, false));
  d[0][0] = true;
  d[0][B[0]]a;
  return 0;
}
