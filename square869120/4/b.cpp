#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  vector<long long> A(n);
  for(int i=0; i<n; i++){
    cin >> A.at(i);
  }
  long long ans = -1;
  for(int i=0; i<1<<n; i++){
    bitset<15> building(i);
    if((int)building.count() < k) continue;//this combinations doesn't satisfy the condition
    long long min_height = 0;
    long long increase_sum = 0;
    for(int j=0; j<n; j++){
      if(1 & i>>j) { // this j th building should be able to be seen.
        if(A.at(j)>min_height) min_height = A.at(j);
        else {
          increase_sum += min_height + 1 - A.at(j);
          min_height = min_height + 1;
        }
      } else {
        min_height = max(min_height, A.at(j));
      }
    }
    if (ans < 0) ans = increase_sum;
    else ans = min(ans, increase_sum);
  }
  cout << ans << endl;
  return 0;
}
