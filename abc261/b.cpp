#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  char A[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j && A[i][j] == '-')
        continue;
      if (i != j)
      {
        if (A[i][j] == 'D' && A[j][i] == 'D')
          continue;
        else if (A[i][j] == 'W' && A[j][i] == 'L')
          continue;
        else if (A[i][j] == 'L' && A[j][i] == 'W')
          continue;
        else
        {
          cout << "incorrect" << endl;
          return 0;
        }
      }
    }
  }
  cout << "correct" << endl;
  return 0;
}