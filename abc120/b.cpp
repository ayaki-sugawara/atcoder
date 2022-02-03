#include<bits/stdc++.h>
using namespace std;

int main() {
  int a, b, k;
  cin >> a >> b >> k;
  int count = 0;
  int c = b;
  while(1){
    if(a%c==0 && b%c==0) count++;
    if(count == k) break;
    c--;
  }
  cout << c << endl;
  return 0;
}
