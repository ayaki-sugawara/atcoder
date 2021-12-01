#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long a;
  cin >> n;
  map<long long,long long> l;
  long long ans = 0;
  for(int i=0; i<n; i++){
    cin >> a;
    l[a] = l[a] + 1;
    ans += (i+1 - l[a]);
  }
//  for(auto itr=l.begin(); itr != l.end(); ++itr){
//    cout << "key = " << itr->first << ", val = " << itr->second << endl;
//  }
  cout << ans << endl;
  return 0;
}
