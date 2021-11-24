#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  map<char, char> mapping;
  mapping['0'] = '0';
  mapping['1'] = '1';
  mapping['6'] = '9';
  mapping['8'] = '8';
  mapping['9'] = '6';

  cin >> S;
  for(auto i:S){
    i = mapping[i];
  }
  reverse(S.begin(), S.end());
  cout << S << endl;
  return 0;
}
