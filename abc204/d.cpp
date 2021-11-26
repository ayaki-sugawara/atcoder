#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> t(n);
  for (int i=0; i<n; i++){
    cin >> t[i];
  }
  sort(t.begin(), t.end(), greater<int>());
  int o1=0;
  int o2=0;
  for (int i=0; i<n; i++){
    cout << t[i] << " " << endl;
  }
  for (int i=0; i<n; i++){
    if (o1 > o2){
      o2 += t[i];
    }
    else {
      o1 += t[i];
    }
  }
  cout << max(o1, o2) << endl;
  return 0;
}
