#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;  
  int p;
  vector<int> temp;
  vector<vector<int>> path = {
      {1}
  };
  for(int i=0; i<N-1; i++){
    cin >> p;
    //temp.resize(path[p-1].size());
    temp = path[p-1];//path from parent to root
    temp.push_back(i+2);//path from this node to root
    path.push_back(temp);
  }
  //debug
//  for (int i=0;i<path.size(); i++){
//    for (int j=0; j<path[i].size(); j++){
//        cout << path[i][j] << " ";
//    }
//    cout << "\n";
//  }
  // end
  int Q;
  cin >> Q;
  int u, d;
  vector<int> U, D;
  int node_num;
  int ans;
  for (int i=0; i<Q; i++){
      cin >> u >> d;
      U.push_back(u-1);
      D.push_back(d+1);
  }

  for (int i=0; i<Q; i++){
      D[i] = D[i] - path[u].size();
  }

  for (int i=0; i<Q; i++){
    cout << D[i] << " " ;
  }


  return 0;
}
