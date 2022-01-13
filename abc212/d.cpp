#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;
  int op_num; //operation number
  int x;
  vector<int> bag;
  long long query2_sum = 0; // sum of number in operation2
  for (int i=0; i<q; i++){
    cin >> op_num;
    if (op_num == 1) {
      cin >> x;
      bag.push_back(x);
    }
    else if(op_num == 2) {
      cin >> x;
      query2_sum += x;
    } else {
      sort(bag.begin(), bag.end(), greater<int>());
      auto b = bag.back();
      cout << b + query2_sum << endl;
      bag.pop_back();
    }
  }
      
  return 0;
}
