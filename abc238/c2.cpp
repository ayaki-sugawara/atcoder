#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 998244353;

long long sum(long long f){
  f %= mod;
  ll ans = (1+f)*f/2;
  ans %= mod;
  return ans;
}

long long digit_f(int digit){
  ll ans = pow(10, digit) - pow(10, digit-1);
  return ans;
}

int main() {
  long long n;
  cin >> n;
  ll temp = n;
  int digit = 0;
  ll ans = 0;
  while(temp!=0){
    temp/=10;
    digit++;
  }
  for(int i=1; i<digit; i++){
    ll f = digit_f(i);
    ans += sum(f);
    ans %= mod;
  }
  ll ff = n - pow(10, digit-1)+1;
  ans += sum(ff);
  ans %= mod;
  cout << ans << endl;
  return 0;
}


