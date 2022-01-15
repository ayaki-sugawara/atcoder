#include <bits/stdc++.h>
using namespace std;

void int_declare(map<char, int> &vi) {
}

void vector_declare(map<char, vector<int>> &vv) {
}

void print_int(int x){
  cout << x << endl;
}

void print_vec(vector<int> vec) {
  cout << "[ ";
  for (auto elem: vec) {
    cout << elem << " ";
  }
  cout << "]" << endl;
}

int main() {
  int n;
  cin >> n;
  map<char, int> vi;
  map<char, vector<int>> vv;

  for(int i=0; i<n; i++){
    string order;
    cin >> order;
    if (order == "int") int_declare(vi);
  }

  return 0;
}
