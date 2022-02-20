#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  stack<int> target;
  stack<int> count;
  for(int i=0; i<n; i++){
    int a;
    cin >> a;
    if(i==0){
      target.push(a);
      count.push(1);
    }
    else{
      if(!target.empty() && a==target.top()){
        count.push(count.top()+1);
      }
      else{
        count.push(1);
      }
      target.push(a);
    }
    if(target.top()==count.top()){
      int pop_count = target.top();
      for(int i=0; i<pop_count; i++){
        target.pop();
        count.pop();
      }
    }
    cout << target.size() << endl;
  }
  return 0;
}
