#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  string s;
  cin >> s;
  //cin >> k;
  vector<int> x;
  int temp = 0;
  for(int i=0; i<s.size(); i++){
    if(s[i] == 'x'){
      temp += 1;
    }
    else {
      if(temp > 0){
        x.push_back(temp);
      }
      temp = 0;
      x.push_back(0);
    }
  }
  if(temp>0) x.push_back(temp);//最後がxのとき用
  for(int i=0; i<x.size(); i++){
    cout << x[i];
  }
  cout << endl;

  for(int i=0; i<k; i++){
    
  }
  return 0;
}
