#include<bits/stdc++.h>
using namespace std;
//thinking from backward
//if p = n
//answer is n - k + 1 and this is constant
//when p = n-1
//if Pn is larger than previous answer, answer is n - k + 1 - 1
//and if smaller than previous answer, answer is same, n - k - 1
//
//ok, when thinking i, if Pi+1 is smaller than k, answer do not change.
//we have to be careful when Pi+1 >= k,
//we have to decrease answer to the nearest number this is included yet.
//3 7 2 5 11 6 1 9 8 10 4
//          2 3 3 5 6 7 7
int main() {
  int n,k;
  cin >> n >> k;
  stack<int> P;
  for(int i=0; i<n; i++){
    int a;
    cin >> a;
    P.push(a);
  }
  vector<bool> f(n+1, true);
  deque<int> answer;
  int pre;
  for(int i=n; i>=k; --i){
   if(i==n) {
     answer.push_front(n - k + 1);
     pre = n - k + 1;
   }
   else {
    if(P.top() < pre){
      answer.push_front(pre);
      f.at(P.top()) = false;
    }
    else{
      pre--;
      while(!f.at(pre)){
        pre--;
      }
      answer.push_front(pre);
    }
    P.pop();
   }
  }
  while(!answer.empty()) {
    cout << answer.front() << endl;
    answer.pop_front();
  }
  return 0;
}
