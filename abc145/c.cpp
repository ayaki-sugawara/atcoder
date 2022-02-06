#include<bits/stdc++.h>
using namespace std;

double distance(pair<int, int> i, pair<int, int> j){
  double ans;
  ans = sqrt(pow(i.first-j.first,2) + pow(i.second-j.second,2));
  return ans;
}

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> loc(n);
  for(int i=0; i<n; i++){
    cin >> loc.at(i).first >> loc.at(i).second;
  }
  cout << fixed << setprecision(10);
  vector<int> town(n);
  iota(town.begin(), town.end(), 0);
  int count = 0;
  double sum = 0;
  do{
    count++;
    for(int i=0; i<n-1; i++){
      sum += distance(loc.at(town.at(i)), loc.at(town.at(i+1)));
    }
  } while(next_permutation(town.begin(), town.end()));
  sum /= count;
  cout << sum << endl;
  return 0;
}
