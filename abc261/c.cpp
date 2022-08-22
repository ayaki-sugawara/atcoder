#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  map<string, int> S;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;

    if (S.count(s) == 0)
    {
      S[s] = 1;
      cout << s << endl;
    }
    else
    {
      cout << s << "(" << S[s] << ")" << endl;
      S.at(s)++;
    }
  }
  return 0;
}