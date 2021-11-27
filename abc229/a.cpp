#include <bits/stdc++.h>
using namespace std;

int main(){
  string S1, S2;
  cin >> S1;
  cin >> S2;
  if (S1 == ".#" && S2 == "#."){
    cout << "No" << endl;
  }
  else if (S1 == "#." && S2 == ".#"){
    cout << "No" << endl;
  }
  else {
    cout << "Yes" << endl;
  }
  return 0;
}
