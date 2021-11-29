#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int teika = 206;
  int urine = n * 1.08;
  if (urine == teika){
    cout << "so-so" << endl;
  }
  else if (urine > teika) {
    cout << ":(" << endl;
  }
  else {
    cout << "Yay!" << endl;
  }
  return 0;
}
