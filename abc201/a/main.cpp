#include <bits/stdc++.h>
using namespace std;

int main(){
  int A1, A2, A3;
  
  cin >> A1 >> A2 >> A3;
    int x[] = {A1, A2,A3};
    sort(x,x+3);
    int d1 = x[1] - x[0];
    int d2 = x[2] - x[1];
    if(d1==d2){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}