#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, t;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);
  vector<int> C(N);
  for (int i=0; i<N; i++){
    cin >> t;
    A.push_back(t);
  }
  for (int i=0; i<N; i++){
    cin >> t;
    B.push_back(t);
  }
  for (int i=0; i<N; i++){
    cin >> t;
    C.push_back(t);
  }
  return 0;
}
