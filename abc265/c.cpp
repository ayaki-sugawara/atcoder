#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;
  char G[h + 1][w + 1];
  for (int i = 1; i < h + 1; i++)
  {
    string s;
    cin >> s;
    for (int j = 1; j < w + 1; j++)
    {
      G[i][j] = s[j - 1];
    }
  }

  bool g[h + 1][w + 1];
  for (int i = 1; i < h + 1; i++)
  {
    for (int j = 1; j < w + 1; j++)
    {
      g[i][j] = 0;
    }
  }
  int x = 1;
  int y = 1;
  while (true)
  {
    if (g[x][y])
    {
      cout << "-1" << endl;
      return 0;
    }
    g[x][y] = true;
    if (G[x][y] == 'U' && x != 1)
    {
      x--;
      continue;
    }
    if (G[x][y] == 'D' && x != h)
    {
      x++;
      continue;
    }
    if (G[x][y] == 'L' && y != 1)
    {
      y--;
      continue;
    }
    if (G[x][y] == 'R' && y != w)
    {
      y++;
      continue;
    }
    break;
  }
  cout << x << " " << y << endl;
  return 0;
}