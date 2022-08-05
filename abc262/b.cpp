#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<set<int>> Path(N);
    for (int i = 0; i < M; i++)
    {
        int U, V;
        cin >> U >> V;
        U--;
        V--;
        Path[U].insert(V);
        Path[V].insert(U);
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if (Path[i].count(j) && Path[j].count(k) && Path[k].count(i))
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}