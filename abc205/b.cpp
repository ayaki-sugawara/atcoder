#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  bool ans = true;
  sort(a.begin(), a.end());
  for(int i=0; i<n; i++){
    if (a[i] != i+1){
      ans = false;
      break;
    }
  }
  if(ans){
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}
