#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  reverse(S.begin(), S.end());
  for (char c:S){
    if(c == "6"){
      cout << "9";
    }
    else if(c == "9"){
      cout << "6";
    }
    else{
      cout << c;
    }
  }
  return 0;
}
