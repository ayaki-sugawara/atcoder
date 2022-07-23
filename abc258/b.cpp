#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n;

vector<pair<int, int>> mv = {{0,1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}};
pair<int, int> move(int i, int j, int midx) {
  i += mv.at(midx).first;
  j += mv.at(midx).second;
  if(i<0) i += n;
  else if (i>n-1) i-=n;
  if(j<0) j += n;
  else if (j>n-1) j-=n;
  return {i, j};
}

ll calc(queue<int> q) {
  ll ans = 0;
  int c = n-1;
  while(!q.empty()) {
    ans += q.front() * pow(10, c);
    q.pop(); c--;
  }
  return ans;
}

int main() {
  ll ans = 0;
  cin >> n;
  vector<vector<int>> A(n, vector<int> (n));
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      cin >> A.at(i).at(j);
    }
  }

  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      for(int m=0; m<8; m++) {
        queue<int> q;
        q.push(A.at(i).at(j));
        pair<int, int> now = {i, j};
        for(int c=0; c<n-1; c++) {
          now = move(now.first, now.second, m);
          q.push(A.at(now.first).at(now.second));
        }
        ans = max(ans, calc(q));
      }
    }
  }
  cout << ans << endl;
  return 0;
}