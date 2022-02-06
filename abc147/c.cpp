#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> honest(n);
  vector<int> liar(n);
  for(int i=0; i<n; i++){
    int a;
    cin >> a;
    for(int j=0; j<a; j++){
      int x,y;
      cin >> x >> y;
      x--;
      if(y == 0){//liar
        liar.at(i) |= 1<<x;
      } else{//honest
        honest.at(i) |= 1<<x;
      }
    }
  }

  int ans = 0;
  for(int i=0; i<1<<n; i++){//full search
    //if "i"th bit is 0, he/she is liar. else is honest;
    //in this case, liar is not always telling a lie, so we do not have to consider him.
    //
    int honest_all = 0;
    int liar_all = 0;
    int honest_person = 0;
    //cout << "i" << i << endl;
    for(int j=0; j<n; j++){//check who is honest
      if(i>>j & 1) { //"j"th person is honest
        //cout << "j" << j << endl;
        honest_person++;
        honest_all |= honest.at(j);
        honest_all |= 1 << j;
        liar_all |= liar.at(j);
      } else {
        liar_all |= 1 <<j;
      }
    }
    //cout << "person" << honest_person << endl;
    //cout << honest_all << endl;
    //cout << liar_all << endl;
    //cout << "judge" << (honest_all & liar_all) << endl;
    //cout << endl;
    if(int(honest_all & liar_all) == 0 && ans < honest_person) {
      ans = honest_person;
      //cout << honest_all << endl;
      //cout << liar_all << endl;
      //cout << endl;
    }
  }
  cout << ans << endl;
  return 0;
}
