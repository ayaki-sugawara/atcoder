#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  iota(v.begin(), v.end(), 1);
  vector<int> p(n);
  vector<int> q(n);
  for(int i=0; i<n; i++) cin >> p.at(i);
  for(int i=0; i<n; i++) cin >> q.at(i);
  int count = 0;
  int p_num, q_num;
  do {
    count++;
    if(p == v) p_num = count;
    if(q == v) q_num = count;
  } while(next_permutation(v.begin(), v.end()));
  cout << abs(p_num - q_num) << endl;
  return 0;
}

