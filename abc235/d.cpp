#include <bits/stdc++.h>
using namespace std;

bool flag = false;
int a;
int final_ans =1001001001;
int reverseB(int num);
map<int, bool> visited;
void search(int num, int count, int pre) {
  if (num == 1 ) {
      flag = true;
      if ( final_ans > count)  final_ans = count;
      return;
  }
  else {
    if (visited.count(num)) return;
    else visited[num] = true;
    int reverseb = reverseB(num);
    if (num %a !=0){
      search(reverseb, count+1, num);
    }
    else {
      search(reverseb, count+1, num);
      search(num/a, count+1, num);
    }
  }
}

int reverseB(int num) {
  int first_digit = num;
  int sum_digit = 1;
  while(first_digit>10) {
    first_digit /= 10;
    sum_digit++;
  }
  int ans;
  ans = (num - first_digit * pow(10, sum_digit-1))*10 + first_digit;
  int cdigit = 1;
  int cfd = ans;
  while(cfd>10) {
    cfd /= 10;
    cdigit++;
  }
  if(cdigit == sum_digit) return ans;
  else return num;
}

int main() {
  int n;
  cin >> a >> n;
  search(n, 0, -1);
  flag ? cout <<  final_ans << endl : cout << -1 << endl;
  return 0;
}
