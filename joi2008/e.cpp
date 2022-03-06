#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  vector<bitset<10>> S(c);
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      int a;
      cin >> a; 
      S.at(j).set(i, a);
    }
  }
  int ans = 0;
  for(int i=0; i<1<<10; i++){
    vector<bitset<10>> N = S;
    for(int row=0; row<r; row++){
      if(i>>row & 1){
        for(int column=0; column<c; column++) {
          bool now = N.at(column).test(row);
          N.at(column).set(row, !now);
        }
      }
    }
    //reverse completed
    int senbei = 0;
    for(int column=0; column<c; column++){
      int front = N.at(column).count();
      int back = r - front;
      senbei += max(front, back);
    }
    ans = max(ans, senbei);
  }
  cout << ans << endl;
  return 0;
}
