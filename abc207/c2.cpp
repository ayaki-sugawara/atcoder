#include<bits/stdc++.h>
using namespace std;

void arrange(vector<pair<double, double>> &v, int t, double l, double r){
  if(t == 1){
    v.push_back(make_pair(l, r));
  }
  else if(t==2){
    v.push_back(make_pair(l, r-0.5));
  }
  else if(t==3){
    v.push_back(make_pair(l+0.5, r));
  }
  else{
    v.push_back(make_pair(l+0.5, r-0.5));
  }
  return;
}

bool compare(pair<double, double> a, pair<double, double> b){
  if(a.first > b.second || a.second < b.first){
    return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  vector<pair<double, double>> v;
  for(int i=0; i<n; i++){
    int t;
    double l, r;
    cin >> t >> l >> r;
    arrange(v, t, l, r);
  }
  int ans = 0;
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(compare(v.at(i), v.at(j))) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
