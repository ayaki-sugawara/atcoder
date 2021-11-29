#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q;
  vector<long long> a;
  vector<long long> l;
  long long k;
  cin >> n >> q;
  for(int i=0; i<n; i++){
    cin >> a[i];
    l[i] = a[i] - (i+1);
  }
  for(int j=0; j<q; j++){
    cin >> k;
  }
  return 0;
}
