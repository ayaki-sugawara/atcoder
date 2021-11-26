#include <bits/stdc++.h>
using namespace std;

int k, n;
vector<vector<int>> a(n, vector<int>(n));
cin >> n >> k;
for (int i=0; i<n; i++){
  for (int j=0; j<n; j++){
    cin >> a[i][j];
  }
}

int center(int row, int column){
  vector<int> b(k*k);
  for (int i=0; i<k; i++){
    for (int j=0; j<k; j++){
      b.push_back(a[row+i][column+j]);
    }
  }
  sort(b.begin(), b.end());
  return b.front();
}

int main() {
  int center_idx = (k * k) / 2 + 1;
  return 0;
}
