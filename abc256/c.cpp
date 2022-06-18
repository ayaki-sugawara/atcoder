#include <bits/stdc++.h>
using namespace std;

int h[3];
int w[3];
int main() {
  int m = 0;
  for(int i=0; i<3; i++) {
    int x;
    cin >> x;
    h[i] = x;
    m = max(m, x);
  }
  for(int i=0; i<3; i++) {
    int x;
    cin >> x;
    w[i] = x;
    m = max(m, x);
  }
  int ans = 0;
  for(int a=1; a<m; a++) {
    for(int b=1; b<m; b++) {
      int c = h[0] - a - b;
      if(c > 0) {
        for(int d=1; d<m; d++) {
          if(w[0] - a - d < 0) break; 
          for(int e=1; d<m; e++) {
            if(w[1] - b - e < 0) break;
            int f = h[1] - d - e;
            if(f>0 && w[2] - c - f > 0) {
              int g = w[0] - a - d;
              int H = w[1] - b - e;
              int i = w[2] - c - f;
              if (g+H+i == h[2]) ans++;
            }
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}