#include <bits/stdc++.h>
using namespace std;

int magicB(int num) {
  int res = num;
  int digit=1;
  while(num > 10){
    num /= 10;
    digit++;
  }
  int first_digit = res % 10;
  res = (res / 10) + first_digit * pow(10, digit-1);
  return res;
}

int main() {
  int a, n;
  cin >> a >> n;
  queue<int> d;
  queue<int> counter;
  map<int, bool> log;
  d.push(1);
  counter.push(0);
  log[1] = false;
  while(!d.empty()){
    int x, c;
    x = d.front();
    d.pop();
    c = counter.front();
    counter.pop();
    cout << x << endl;
    if (x == n) {
      cout << c << endl;
      return 0;
    }
    if (x * a <= n && !log.count(x*a)){
      d.push(x*a);
      counter.push(c+1);
    }
    if(x % 10 != 0 && x > 9) {
      int to = magicB(x);
      if(to <= n && !log.count(to)) {
        d.push(to);
        counter.push(c+1);
      }
    }
  }
  cout << -1 << endl;
  return 0;
}
