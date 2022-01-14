#include <bits/stdc++.h>
using namespace std;
void print_vec(vector<int> vec) {
  cout << "[ ";
  for(auto elem: vec) {
    cout << elem << " ";
  }
  cout << "]" << endl;
}
string read_name() {
  string name, equal;
  cin >> name >> equal;
  return name;
}
int read_int(map<string, int> &var_int){
  string input;
  cin >> input;
  if(isdigit(input.at(0))) return stoi(input);
  return var_int.at(input);
}
int calc_int(map<string, int> &var_int){
  int ans = 0;
  string ope;
  ans = read_int(var_int);
  cin >> ope;
  while(ope != ";"){
    if (ope == "+"){
      ans += read_int(var_int);
    } else {
      ans -= read_int(var_int);
    }
    cin >> ope;
  }
  return ans;
}
vector<int> read_vec_val(map<string, int> &var_int) {
  vector<int> ans;
  string input = "a";
  while(input != "]") {
    int val = read_int(var_int);
    ans.push_back(val);
    cin >> input;
  }
  return ans;
}
vector<int> read_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec) {
  string input;
  cin >> input;
  if(input == "[") return read_vec_val(var_int);
  else return var_vec.at(input);
}
vector<int> calc_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec) {
  vector<int> ans;
  string ope;
  vector<int> input;
  ans = read_vec(var_int, var_vec);
  cin >> ope;
  while(ope != ";") {
    input = read_vec(var_int, var_vec);
    if(ope == "+") {
      for(int i=0; i<ans.size(); i++) {
        ans.at(i) += input.at(i);
      }
    }
    else {
      for(int i=0; i<ans.size(); i++) {
        ans.at(i) -= input.at(i);
      }
    }
    cin >> ope;
  }
  return ans;
}
int main() {
  int N;
  cin >> N;
  map<string, int> var_int; 
  map<string, vector<int>> var_vec; 
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    if (s == "int") {
      string name = read_name();
      var_int[name] = calc_int(var_int);
    }
    if (s == "vec") {
      string name = read_name();
      var_vec[name] = calc_vec(var_int, var_vec);
    }
    if (s == "print_int") {
      cout << calc_int(var_int) << endl;
    }
    if (s == "print_vec") {
      print_vec(calc_vec(var_int, var_vec));
    }
  }
}
