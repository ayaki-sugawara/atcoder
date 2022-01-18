#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
using namespace std;

deque<int> ope_f(deque<int> d) {
  deque<int> ans = d;
  int x = ans.front();
  ans.pop_front();
  int y = ans.front();
  ans.pop_front();
  int add = (x + y) % 10;
  ans.push_front(add);
  return ans;
}

deque<int> ope_g(deque<int> d) {
  deque<int> ans = d;
  int x = ans.front();
  ans.pop_front();
  int y = ans.front();
  ans.pop_front();
  int add = (x * y) % 10;
  ans.push_front(add);

  return ans;
}

int main() {
  int n;
  cin >> n;
  deque<int> A;
  queue<deque<int>> q;
  rep(i, n) {
    int a;
    cin >> a;
    A.push_back(a);
  }
  vector<int> count(10, 0);

  q.push(A);
  while(!q.empty()){
    deque<int> now = q.front();
    q.pop();
    if (now.size() == 1){
      count.at(now.front())++;
    } else {
      q.push(ope_f(now));
      q.push(ope_g(now));
    }
  }
  rep(i,10) cout << count.at(i) << endl;
  return 0;
}
