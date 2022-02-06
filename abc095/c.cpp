#include<bits/stdc++.h>
using namespace std;

int main(){
  // price = A * a + B * b + C * c
  // a = number of A pizza
  // b = number of B pizza
  // c = number of AB pizza
  // a + c/2 >= X
  // b + c/2 >= Y
  int A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;
  int ans = 1001001001;
  for(int i=0; i/2<=max(X, Y); i++){
    int a = max(X - i/2,0);
    int b = max(Y - i/2,0);
    int price = A*a + B*b + C*i;
    if(price < ans){
      ans = price;
    }
  }
  cout << ans << endl;
  return 0;
}
