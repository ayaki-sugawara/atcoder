#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main() {
  bool dp[100][100] = {false};
  for(int i=0; i<100; i++){
    for(int j=0; j<100; j++){
      if(IsPrime(i+j+2)) dp[i][j] = true;
    }
  }
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  a--; b--; c--; d--;
  for(int i=a; i<b+1; i++){
    bool flag = true;
    for(int j=c; j<d+1; j++){
      if(dp[i][j]) flag = false;
    }
    if(flag){
      cout << "Takahashi" << endl;
      return 0;
    }
  }
  cout << "Aoki" << endl;
  return 0;
}
