#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(int)(n); i++)

map<int, string> rps;
void janken(pair<int, int> &a, pair<int, int> &b, int i){
  char a_hand = rps.at(a.second)[i];
  char b_hand = rps.at(b.second)[i];
  if (a_hand == b_hand) return;
  if (a_hand == 'G'){
    if (b_hand == 'C') {a.first--;  return;}
    else {b.first--; return;}
  }
  if (a_hand == 'C'){
    if (b_hand == 'P') {a.first--; return;}
    else {b.first--; return;}
  }
  if (a_hand == 'P'){
    if (b_hand == 'G') {a.first--; return;}
    else {b.first--; return;}
  }
  return;
}

int main() {
  int n, m;
  cin >> n >> m;
  rep(i,n*2) cin >> rps[i+1];

  vector<pair<int, int>> rank;
  rep(i, n*2) rank.push_back(make_pair(0, i+1));

  //pair(-win, number)

  rep(i, m) {
    rep(j, n) {
        //do it and update win count
        janken(rank.at(j*2), rank.at(j*2+1),i);
    }
    //update rank
    sort(rank.begin(), rank.end());
  }
  rep(i,n*2) cout <<  rank.at(i).second << endl;
  return 0;
}
