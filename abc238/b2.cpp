#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  priority_queue<int> A;
  int now = 0;
  A.push(now);
  for(int i=0; i<n; i++){
    int a;
    cin >> a;
    now+=a;
    A.push((now)%360);
  }
  A.push(360);
  int pre = A.top();
  A.pop();
  int ans = 0;
  for(int i=0; i<n+2; i++){
    int next = A.top();
    A.pop();
    if(pre-next > ans) ans = pre-next;
    pre = next;
  }
  cout << ans << endl;
  return 0;
}
