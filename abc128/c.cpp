#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> sw(n);
  for(int i=0; i<m; i++){
    int k;
    cin >> k;
    for(int j=0; j<k; j++){
      int s;
      cin >> s;
      s--;
      sw.at(s) |= 1 << i; 
    }
  }
  int p = 0;
  for(int i=0; i<m; i++){
    int x;
    cin >> x;
    p |= x << i;
  }
  int ans = 0;
  for(int i=0; i<(1<<n); i++){ //full search
    int sw_all = 0;
    for(int j=0; j<n; j++){
      int t = i >> j;
      if(t&1) {//j th switch is on
        sw_all ^= sw.at(j);
      }
    }
    if(sw_all==p) ans++;
  }
  cout << ans << endl;
      
  return 0;
}
