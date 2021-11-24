#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  reverse(S.begin(), S.end());
  for (int i=0; i<S.size(); i++){
    if(S.at(i)== '6'){
      cout << '9';
    }
    else if(S.at(i)== '9'){
      cout << '6';
    }
    else{
      cout <<S.at(i);
    }
  }
  cout << endl;
  return 0;
}
