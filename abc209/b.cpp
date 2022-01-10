#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, a;
  int sum = 0;
  int discount = 0;
  cin >> n >> x;
  for(int i=0; i<n; i++){
    cin >> a;
    sum += a;
  }
  discount = n / 2;
  sum -= discount;
  if (x >= sum){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
