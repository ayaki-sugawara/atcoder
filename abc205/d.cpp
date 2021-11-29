#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q;
  long long k;
  cin >> n >> q;
  vector<long long> a(n);
  vector<long long> l(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
    l[i] = a[i] - (i+1);
  }
  for(int j=0; j<q; j++){
    cin >> k;
    if(k > l[n-1]) {
      cout << a[n-1] + (k-l[n-1]) << endl;
    }
    else {
      long long idx = lower_bound(l.begin(), l.end(), k) - l.begin();
      cout << a[idx] - (l[idx]-k) - 1 << endl;
    }
  }
  return 0;
}
