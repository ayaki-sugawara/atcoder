#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  priority_queue<int> A;
  int pre = 0;
  A.push(0);
  for(int i=0; i<n; i++){
    int a;
    cin >> a;
    A.push((a+pre)%360);
    pre = a;
  }
  int ans = 0;
  int next;
  pre = A.top();
  cout << pre << endl;
  A.pop();
  for(int i=0; i<n; i++){
    next = A.top();
    cout << next << endl;
    A.pop();
    if(pre-next > ans) ans = pre - next;
    pre = next;
  }
  cout << ans << endl;
  return 0;
}
