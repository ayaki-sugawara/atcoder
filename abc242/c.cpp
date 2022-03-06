#include<bits/stdc++.h>
using namespace std;
#define mod 998244353

bool check(long long n){
  int pre=n%10;
  while(n>0){
    int l = n % 10;
    if(l == 0) return false;
    else{
      if(abs(pre-l) > 1) return false;
    }
    n /= 10;
  }
  return true;
}

int main(){
  int n;
  cin >> n;
  long long start = pow(10,n-1);
  long long end = pow(10,n);
  long long ans = 0;
  for(int i=start; i<end; i++){
    if(check(i)){
      ans++;
    }
    ans %= 998244353;
  }
  cout << ans << endl;
  return 0;
}
