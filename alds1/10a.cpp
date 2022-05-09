#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> dp(45);
  dp.at(0) = 1;
  dp.at(1) = 1;
  for(int i=2; i<45; i++) {
    dp.at(i) = dp.at(i-1) + dp.at(i-2);
  }
  cout << dp.at(n) << endl;
  return 0;
}