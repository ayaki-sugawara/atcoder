#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N, W;
  cin >> N >> W;
  vector<pair<long long, long long>> v(N);
  for(int i=0; i<N; i++){
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  long long ans = 0;
  for (int i=0; i<N; i++){
    ans += v[i].first*min(W, v[i].second);
    W -= min(W, v[i].second);
  }
  cout << ans << endl;
  return 0;
}
