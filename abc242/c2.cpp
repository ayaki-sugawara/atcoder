#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  queue<pair<int, int>> Q;
  for(int i=1; i<10; i++){
    Q.push(make_pair(i, 1));
  }
  long long ans = 0;
  int x, d;
  while(!Q.empty()){
    tie(x, d) = Q.front();
    Q.pop();
    if(d == n){
      ans += 1;
      ans %= 998244353;
    } else {

      if(x==1){
        Q.push(make_pair(x, d+1));
        Q.push(make_pair(x+1, d+1));
      } else if (x==9){
        Q.push(make_pair(x, d+1));
        Q.push(make_pair(x-1, d+1));
      } else {
        Q.push(make_pair(x+1, d+1));
        Q.push(make_pair(x, d+1));
        Q.push(make_pair(x-1, d+1));
      }
    }
  }
  cout << ans << endl;
  return 0;
}
