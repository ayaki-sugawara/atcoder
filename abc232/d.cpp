#include<std/c++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> c(h, vector<int>(w));
  for (int i=0; i<h; i++){
    for (int j=0; j<w; j++){
      cin >> c.at(i).at(j);
    }
  }

  vector<vector<int>> s(h, vector<int>(w, 0));
  return 0 
}
