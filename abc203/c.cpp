#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  long long K, a, b;
  cin >> N >> K;
  vector<pair<long long, long long> > A;
  for (int i=0; i<N; i++){
    cin >> a >> b;
    A.push_back({a,b});
  }
  sort(A.begin(), A.end());
  for (int i=0; i<N; i++){
    if(A[i].first > K) break;
    K+=A[i].second;
  }
  cout << K << endl;
  return 0;
}
