#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;
  int h = 21;
  int m = 0;
  if(k>59) {
    h++;
    m+=k-60;
  } else {
    m+=k;
  }
  if(m<10){
    cout << h << ":" << "0" << m << endl;
  } else {
    cout << h << ":" << m << endl;
  }
  return 0;
}