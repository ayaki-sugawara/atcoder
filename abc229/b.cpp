#include <bits/stdc++.h>
using namespace std;

int main(){
  long long A, B;
  cin >> A >> B;
  long long la = log10(A)+1;
  long long lb = log10(B)+ 1;
  for (int i=0; i<min(la, lb); i++){
    long long ia= (A%10); A/= 10;
    long long ib = (B%10); B/= 10;
    if (ia + ib > 9){
      cout << "Hard" << endl;
      return 0;
    }
  }
  cout << "Easy" << endl;
  return 0;
}
