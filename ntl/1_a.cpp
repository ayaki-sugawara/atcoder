#include <bits/stdc++.h>
using namespace std;

vector<int> Prime;
int arr[1000000000];

void Eratosthenes() {
  for(int i=2; i*i<1000000001; i++) {
    arr[i] = 1;
  }
  for(int i=2; i*i*i*i<1000000001; i++) {
    if(arr[i]){
      for(int j=0; i * (j+2) <100001; j++) {
        arr[i * (j+2)] = 0;
      }
    }
  }
  for(int i=2; i*i<1000000001; i++) {
    if(arr[i]) Prime.push_back(i);
  }
}

int main() {
  int n;
  cin >> n;
  cout << n << ": ";
  Eratosthenes();

  for(int i=0; i<Prime.size(); i++) {
    int p = Prime.at(i);
    while(n%p == 0) {
      n /= p;
      cout << p << " ";
    }
  }
  return 0;
}