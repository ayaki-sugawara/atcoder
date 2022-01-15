#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  vector<int> ng = {123, 2345, 3456, 4567, 5678, 6789, 7890, 8901, 9012};
  cin >> X;
  if (X % 1111 == 0) {
    cout << "Weak" << endl;
    return 0;
  }
  for(const auto& e :ng) {
    if (X == e) {
      cout << "Weak" << endl;
      return 0;
    }
  }
  cout << "Strong" << endl;
  return 0;
}
