#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i=1; i<1000000;i++ ){
    if (i*(i+1)>=2*n){
      cout << i << endl;
      break;
    }
  }
  return 0;
}
