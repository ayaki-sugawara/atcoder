#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 998244353;

long long sum(int digit){
  long long f = 9*pow(10,(digit-1));
  ll a = (1+f) % mod;
  f %= mod;
  long long ans = a * f/2;
  ans %= mod;
  return ans;
}

long long sum2(int digit, long long f){
  f = f - pow(10, digit-1)+1;
  ll a = (1+f) % mod;
  f %= mod;
  long long ans = a * f/2;
  ans %= mod;
  return ans;
}


int main() {
  long long n;
  cin >> n;
  int digit=0;
  long long temp = n;
  while(temp!=0){
    temp/=10;
    digit++;
  }
  long long ans = 0;
  for(int i=1; i<digit; i++){
    ans += sum(i);
    ans %= mod;
  }
  ans += sum2(digit, n);
  ans %= mod;
  cout << ans << endl;
  return 0;
}
