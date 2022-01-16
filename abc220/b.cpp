#include <bits/stdc++.h>
using namespace std;
  
long long convert_10(long long a, long long n){
  long long ans = 0;
  long long x;
  long long i=0;
  while(a>0){
    x = a % 10;
    ans += x * pow(n, i);
    a /= 10;
    i++;
  }
    
  return ans;
}

int main() {
  long long n;
  long long a, b;
  cin >> n;
  cin >> a >> b;
  long long ans = convert_10(a, n) * convert_10(b,n);
  cout << ans << endl;
  return 0;
}
