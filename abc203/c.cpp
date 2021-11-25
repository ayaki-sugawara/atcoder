#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  long long K, a, b;
  cin >> N >> K;
  vector<long long> dati(10000000000000000000);
  for (int i=0; i<N; i++){
    cin >> a >> b;
    dati[a] += b;
  }
  long long mura=0;
  while (K>0) {
    mura++;
    K--;
    cout << "mura: " << mura << endl;
    cout << "kane: " << K << endl;
  }
  cout << mura << endl;
  return 0;
}
