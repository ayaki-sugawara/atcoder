#include<bits/stdc++.h>
using namespace std;
using ll = long long;

double d(pair<double, double> p1, pair<double, double> p2){
  double x1, y1, x2, y2;
  tie(x1, y1) = p1;
  tie(x2, y2) = p2;
  double ans = pow(x1-x2,2) + pow(y1-y2,2);
  return ans;
}

int main() {
  int n;
  cin >> n;
  double ans= 0;
  vector<pair<double, double>> P(n);
  for(int i=0; i<n; i++){
    double x,y;
    cin >> x >> y;
    P.at(i) = make_pair(x, y);
  }
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      ans = max(ans, d(P.at(i), P.at(j)));
    }
  }
  cout << fixed << setprecision(15) << sqrt(ans) << endl;
  return 0;
}
