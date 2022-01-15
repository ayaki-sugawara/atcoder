#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  int q;
  cin >> q;
  int op_num; //operation number
  int x;
  priority_queue<ll, vector<ll>, greater<ll>> bag;
  ll query2_sum = 0; // sum of number in operation2
  for (int i=0; i<q; i++){
    cin >> op_num;
    if (op_num == 1) {
      cin >> x;
      bag.push(x-query2_sum);
    }
    else if(op_num == 2) {
      cin >> x;
      query2_sum += x;
    } else {
      cout << bag.top() + query2_sum << endl;
      bag.pop();
    }
  }
      
  return 0;
}
